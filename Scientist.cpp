#include "Scientist.hpp"
#include "MyException.h"
using namespace pandemic;
Scientist::Scientist(Board& b,int city,int num=4):Player(b,city)
{
    number_of_cards_to_discover=num;
}

Scientist::~Scientist()
{
}

void Scientist::discover_cure(Color color){
    if(board.is_lab(current_city)&&count_colors[static_cast<int>(color)]>=number_of_cards_to_discover){
        board.discover_cure(static_cast<int>(color) );
        for(int i=0,c=0;i<48&&c<number_of_cards_to_discover;i++)
            if( board.get_color(cards[i])==static_cast<int>(color) ){
                drop_card(cards[i]);
                c++;
            }
    }else
        throw MyException("don't have enough cards to discover cure OR there is no lab in the city");
}
string Scientist::role(){
    return "Scientist";
}
