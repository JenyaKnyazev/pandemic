#include <iostream>
#include "City.hpp"
#include "Color.hpp"
#include "OperationsExpert.hpp"
#include "Virologist.hpp"
#include "Board.hpp"
#include <exception>

int main()
{
    Board b;
    Virologist v(b,City::Kinshasa);

    return 0;
}
