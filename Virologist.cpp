#include "Virologist.hpp"

Virologist::Virologist(Board& b,int city):Player(b,city)
{

}

Virologist::~Virologist()
{

}
void Virologist::treat(int c){
    if(c!=current_city&&cards[c]==1&&board.get_health(c)!=0&&board.is_discovered_cure(board.get_color(c))){
        board[c]=0;
        drop_card(c);
    }else if(c!=current_city&&cards[c]==1&&board.get_health(c)!=0){
        board[c]=board[c]-1;
        drop_card(c);
    }else{
        Player::treat(c);
    }
}
string Virologist::role(){
    return "Virologist";
}
