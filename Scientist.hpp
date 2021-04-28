#ifndef SCIENTIST_H
#define SCIENTIST_H
#include "Player.hpp"
#include "dontHaveCardException.hpp"
class Scientist:public Player
{
    public:
        Scientist(Board&,int,int);
        virtual ~Scientist();
        void discover_cure(int);
    private:
        int number_of_cards_to_discover;
};

#endif // SCIENTIST_H