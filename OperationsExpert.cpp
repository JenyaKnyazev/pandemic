#include "OperationsExpert.hpp"
#include "MyException.h"
using namespace pandemic;
OperationsExpert::OperationsExpert(Board &b,int city):Player(b,city)
{

}

OperationsExpert::~OperationsExpert()
{
}
Player& OperationsExpert::build(){
    board.build(current_city);
    return *this;
}
string OperationsExpert::role(){
    return "OperationsExpert";
}
