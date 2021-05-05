#ifndef MEDIC_H
#define MEDIC_H
#include "Player.hpp"
#include <string>
namespace pandemic{
class Medic:public Player
{
    public:
        Medic(Board&,int);
        virtual ~Medic();
        Player& treat(int);
        Player& fly_direct(int);
        void fly_charter(int);
        void fly_shuttle(int);
        Player& drive(int);
        std::string role();
};
}
#endif // MEDIC_H
