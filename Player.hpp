#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "Color.hpp"
#include <string>
#include "Board.hpp"
using namespace std;
namespace pandemic{
class Player
{
    public:
        Player(Board&,int);
        virtual ~Player();
    protected:
        int* cards;
        int* count_colors;
        int current_city;
    public:
        Board& board;
        virtual Player& drive(int);
        virtual Player& fly_direct(int);
        virtual void fly_charter(int);
        virtual void fly_shuttle(int);
        virtual void build();
        virtual void discover_cure(Color);
        virtual Player& treat(int);
        virtual string role()=0;
        Player& take_card(int);
        void drop_card(int);
};
}
#endif
