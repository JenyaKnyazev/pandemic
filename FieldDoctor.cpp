#include "FieldDoctor.hpp"
#include "MyException.h"
using namespace pandemic;
FieldDoctor::FieldDoctor(Board& b,int c):Player(b,c)
{

}

FieldDoctor::~FieldDoctor()
{

}
Player& FieldDoctor::treat(int c){
    if(c==current_city){
        return Player::treat(c);
    }
    if(board.get_health(c)==0||board.can_drive(current_city,c)==0)
        throw MyException("there is no infection in the city or trying to treat not connected city");
    if( board.is_discovered_cure(board.get_color(c)) )
        board[c]=0;
    else
        board[c]=board[c]-1;
    return *this;
}
string FieldDoctor::role(){
    return "FieldDoctor";
}
