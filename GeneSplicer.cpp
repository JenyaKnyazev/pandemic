#include "GeneSplicer.hpp"
#include "MyException.h"
GeneSplicer::GeneSplicer(Board& b,int c):Player(b,c)
{

}

GeneSplicer::~GeneSplicer()
{

}
void GeneSplicer::discover_cure(int color){
    int c=0;
    for(int i=0;i<48;i++)
        if(cards[i]==1)
            c++;
    if(board.is_lab(current_city)&&c>=5){
        board.discover_cure(color);
        for(int i=0,c2=0;i<48&&c<5;i++)
            if( cards[i]==1){
                drop_card(cards[i]);
                c2++;
            }
    }else
        throw MyException("don't have enough cards to discover a cure or there is no lab in the city");
}
std::string GeneSplicer::role(){
    return "GeneSplicer";
}
