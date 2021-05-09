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
        Board& board;
    public:
        virtual Player& drive(int);
        virtual Player& fly_direct(int);
        virtual Player& fly_charter(int);
        virtual Player& fly_shuttle(int);
        virtual Player& build();
        virtual Player& discover_cure(Color);
        virtual Player& treat(int);
        virtual string role()=0;
        Player& take_card(int);
        void drop_card(int);
        void remove_cards();
};
}
#endif
