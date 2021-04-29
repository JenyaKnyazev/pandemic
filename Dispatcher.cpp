#include "Dispatcher.hpp"

Dispatcher::Dispatcher(Board& b,int city):Player(b,city)
{
    //ctor
}

Dispatcher::~Dispatcher()
{
    //dtor
}
void Dispatcher::fly_direct(int c){
    if(board.is_lab(current_city))
        current_city=c;
    else
        Player::fly_direct(c);
}
string Dispatcher::role(){
    return "Dispatcher";
}
