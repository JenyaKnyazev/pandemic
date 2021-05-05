#include "Virologist.hpp"
using namespace pandemic;
Virologist::Virologist(Board& b,int city):Player(b,city)
{

}

Virologist::~Virologist()
{

}
Player& Virologist::treat(int c){
    if(c!=current_city&&cards[c]==1&&board.get_health(c)!=0&&board.is_discovered_cure(board.get_color(c))){
        board[c]=0;
        drop_card(c);
    }else if(c!=current_city&&cards[c]==1&&board.get_health(c)!=0){
        board[c]=board[c]-1;
        drop_card(c);
    }else{
        return Player::treat(c);
    }
    return *this;
}
string Virologist::role(){
    return "Virologist";
}
