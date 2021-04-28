#include "FieldDoctor.hpp"
#include "labException.hpp"
FieldDoctor::FieldDoctor(Board& b,int c):Player(b,c)
{

}

FieldDoctor::~FieldDoctor()
{

}
void FieldDoctor::treat(int c){
    if(board.get_health(current_city)==0||board.can_drive(current_city,c)==0)
        throw labException();
    if( board.is_discovered_cure(board.get_color(c)) )
        board[c]=0;
    else
        board[c]=board[c]-1;
}
