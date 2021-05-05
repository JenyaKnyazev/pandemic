#include "OperationsExpert.hpp"
#include "MyException.h"
using namespace pandemic;
OperationsExpert::OperationsExpert(Board &b,int city):Player(b,city)
{

}

OperationsExpert::~OperationsExpert()
{
}
void OperationsExpert::build(){
    if(board.is_lab(current_city))
        throw MyException("already have a lab in current city");
    else
        board.build(current_city);
}
string OperationsExpert::role(){
    return "OperationsExpert";
}
