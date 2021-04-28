#ifndef MEDIC_H
#define MEDIC_H
#include "Player.hpp"

class Medic:public Player
{
    public:
        Medic(Board&,int);
        virtual ~Medic();
        void treat(int);
        void fly_direct(int);
        void fly_charter(int);
        void fly_shuttle(int);
        Player& drive(int);
};

#endif // MEDIC_H