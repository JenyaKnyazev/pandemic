#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include "Board.hpp"
using namespace std;
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
        virtual void fly_direct(int);
        virtual void fly_charter(int);
        virtual void fly_shuttle(int);
        virtual void build();
        virtual void discover_cure(int);
        virtual void treat(int);
        virtual string role()=0;
        Player& take_card(int);
        void drop_card(int);
};
#endif
