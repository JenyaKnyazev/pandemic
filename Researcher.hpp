#ifndef RESEARCHER_H
#define RESEARCHER_H
#include "Player.hpp"

class Researcher:public Player
{
    public:
        Researcher(Board&,int);
        virtual ~Researcher();
        void discover_cure(int);
        string role();
};

#endif // RESEARCHER_H
