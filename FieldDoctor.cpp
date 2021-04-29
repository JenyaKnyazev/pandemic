#include "FieldDoctor.hpp"
#include "MyException.h"
FieldDoctor::FieldDoctor(Board& b,int c):Player(b,c)
{

}

FieldDoctor::~FieldDoctor()
{

}
void FieldDoctor::treat(int c){
    if(c==current_city){
        Player::treat(c);
        return;
    }
    if(board.get_health(c)==0||board.can_drive(current_city,c)==0)
        throw MyException("there is no infection in the city or trying to treat not connected city");
    if( board.is_discovered_cure(board.get_color(c)) )
        board[c]=0;
    else
        board[c]=board[c]-1;
}
string FieldDoctor::role(){
    return "FieldDoctor";
}
