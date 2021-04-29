#include "Scientist.hpp"
#include "MyException.h"
Scientist::Scientist(Board& b,int city,int num=4):Player(b,city)
{
    number_of_cards_to_discover=num;
}

Scientist::~Scientist()
{
}

void Scientist::discover_cure(int color){
    if(board.is_lab(current_city)&&count_colors[color]>=number_of_cards_to_discover){
        board.discover_cure(color);
        for(int i=0,c=0;i<48&&c<number_of_cards_to_discover;i++)
            if( board.get_color(cards[i])==color){
                drop_card(cards[i]);
                c++;
            }
    }else
        throw MyException("don't have enough cards to discover cure OR there is no lab in the city");
}
string Scientist::role(){
    return "Scientist";
}
