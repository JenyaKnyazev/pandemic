#include "Researcher.hpp"
#include "MyException.h"
using namespace pandemic;
Researcher::Researcher(Board& b,int city):Player(b,city)
{
    //ctor
}

Researcher::~Researcher()
{
    //dtor
}
Player& Researcher::discover_cure(Color color){
    if( board.is_discovered_cure(static_cast<int>(color)) )
        return *this;
    if(count_colors[static_cast<int>(color) ]>=5){
        board.discover_cure(static_cast<int>(color) );
        for(int i=0,c=0;i<48&&c<5;i++)
            if( board.get_color(cards[i])==static_cast<int>(color) ){
                drop_card(cards[i]);
                c++;
            }
    }else
        throw MyException("don't have a enough cards to discover cure");
    return *this;
}
string Researcher::role(){
    return "Researcher";
}
