#ifndef GENESPLICER_H
#define GENESPLICER_H
#include "Player.hpp"
#include <string>
class GeneSplicer:public Player
{
    public:
        GeneSplicer(Board& b,int);
        virtual ~GeneSplicer();
        void discover_cure(int);
        std::string role();
};

#endif // GENESPLICER_H
