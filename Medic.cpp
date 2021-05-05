#include "Medic.hpp"
#include "MyException.h"
using namespace pandemic;
Medic::Medic(Board& b,int city):Player(b,city)
{
}

Medic::~Medic()
{
    //dtor
}
Player& Medic::treat(int c){
    if(board.get_health(current_city)==0||c!=current_city)
        throw MyException("there is no infection on the city or trying to treat not current city");
    while(board.get_health(current_city)>0)
        return Player::treat(c);
}
Player& Medic::fly_direct(int c){
    Player& res=Player::fly_direct(c);
    if(board.get_health(current_city)>0)
        treat(current_city);
    return res;
}
void Medic::fly_charter(int c){
    Player::fly_charter(c);
    if(board.get_health(current_city)>0)
        treat(current_city);
}
void Medic::fly_shuttle(int c){
    Player::fly_shuttle(c);
    if(board.get_health(current_city)>0)
        treat(current_city);
}
Player& Medic::drive(int c){
    Player &s=Player::drive(c);
    if(board.get_health(current_city)>0)
        treat(current_city);
    return s;
}
std::string Medic::role(){
    return "Medic";
}
