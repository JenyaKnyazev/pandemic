#ifndef VIROLOGIST_H
#define VIROLOGIST_H
#include "Player.hpp"

class Virologist:public Player
{
    public:
        Virologist(Board&,int);
        virtual ~Virologist();
        void treat(int c)override;
        string role()override;
};

#endif // VIROLOGIST_H
