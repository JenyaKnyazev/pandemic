#ifndef GENESPLICER_H
#define GENESPLICER_H
#include "Player.hpp"

class GeneSplicer:public Player
{
    public:
        GeneSplicer(Board& b,int);
        virtual ~GeneSplicer();
        void discover_cure(int);
};

#endif // GENESPLICER_H
