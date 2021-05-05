#include "Player.hpp"
#include <iostream>
#include "MyException.h"
using namespace pandemic;
Player::Player(Board& b,int city):board(b),current_city(city)
{
    cards=new int[48];
    count_colors=new int[4];
    for(int i=0;i<48;i++)
        cards[i]=0;
    for(int i=0;i<4;i++)
        count_colors[i]=0;

}

Player::~Player()
{
    delete[] cards;
    delete[] count_colors;
}
void Player::build(){
    if(board.is_lab(current_city))
        throw MyException("the city already have a lab\n");
    if(cards[current_city]==0)
        throw MyException("don't have a card to build\n");
    board.build(current_city);
}
Player& Player::fly_direct(int c){
    if(cards[c]==1){
        drop_card(c);
        current_city=c;
    }else
        throw MyException("dont have a card of direction city to fly direct\n");
    return *this;
}
void Player::discover_cure(Color color){
    if(board.is_lab(current_city)&&count_colors[static_cast<int>(color)]>=5){
        board.discover_cure(static_cast<int>(color) );
        for(int i=0,c=0;i<48&&c<5;i++)
            if( board.get_color(cards[i])==static_cast<int>(color) ){
                drop_card(cards[i]);
                c++;
            }
    }else
        throw MyException("don't have enough cards to discover cure OR do't have lab in the current city\n");
}
Player& Player::treat(int c){
    if(board.get_health(current_city)==0||c!=current_city)
        throw MyException("there is no infection on the city or trying to treat not current city");
    else if( board.is_discovered_cure(board.get_color(current_city)) )
        board[current_city]=0;
    else
        board[current_city]=board[current_city]-1;
    return *this;
}
Player& Player::drive(int c){
    if(board.can_drive(current_city,c)){
        current_city=c;
    }else
        throw MyException("cannot drive to not connected city");
        return *this;
}
Player& Player::take_card(int card){
    cards[card]=1;
    count_colors[board.get_color(card)]+=1;
    return *this;
}
void Player::drop_card(int card){
    cards[card]=0;
    count_colors[board.get_color(card)]-=1;
}
void Player::fly_charter(int c){
    if(cards[current_city]==0)
        throw MyException("don't have a card of current city to fly charter");
    else{
        drop_card(current_city);
        current_city=c;
    }
}
void Player::fly_shuttle(int c){
    if(board.is_lab(c)&&board.is_lab(current_city)){
        current_city=c;
    }else
        throw MyException("don't have lab in the current city or in direct city cannot fly shuttle");
}
