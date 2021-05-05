#include "Dispatcher.hpp"
using namespace pandemic;
Dispatcher::Dispatcher(Board& b,int city):Player(b,city)
{
    //ctor
}

Dispatcher::~Dispatcher()
{
    //dtor
}
Player& Dispatcher::fly_direct(int c){
    if(board.is_lab(current_city)){
        current_city=c;
        return *this;
    }else
        return Player::fly_direct(c);
}
string Dispatcher::role(){
    return "Dispatcher";
}
