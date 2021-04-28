#ifndef VIROLOGIST_H
#define VIROLOGIST_H
#include "Player.hpp"

class Virologist:public Player
{
    public:
        Virologist(Board&,int);
        virtual ~Virologist();
        void treat(int c);

};

#endif // VIROLOGIST_H
