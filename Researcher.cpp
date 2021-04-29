#include "Researcher.hpp"
#include "MyException.h"
Researcher::Researcher(Board& b,int city):Player(b,city)
{
    //ctor
}

Researcher::~Researcher()
{
    //dtor
}
void Researcher::discover_cure(int color){
    if(count_colors[color]>=5){
        board.discover_cure(color);
        for(int i=0,c=0;i<48&&c<5;i++)
            if( board.get_color(cards[i])==color){
                drop_card(cards[i]);
                c++;
            }
    }else
        throw MyException("don't have a enough cards to discover cure");
}
string Researcher::role(){
    return "Researcher";
}
