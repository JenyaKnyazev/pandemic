#include "OperationsExpert.hpp"
#include "labException.hpp"
OperationsExpert::OperationsExpert(Board &b,int city):Player(b,city)
{

}

OperationsExpert::~OperationsExpert()
{
}
void OperationsExpert::build(){
    if(board.is_lab(current_city))
        throw labException();
    else
        board.build(current_city);
}
string OperationsExpert::role(){
    return "OperationsExpert";
}
