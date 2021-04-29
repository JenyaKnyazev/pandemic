#ifndef MEDIC_H
#define MEDIC_H
#include "Player.hpp"
#include <string>
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
        std::string role();
};

#endif // MEDIC_H
