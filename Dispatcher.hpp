#ifndef DISPATCHER_H
#define DISPATCHER_H
#include "Player.hpp"

class Dispatcher:public Player
{
    public:
        Dispatcher(Board&,int);
        virtual ~Dispatcher();
        void fly_direct(int);
};

#endif // DISPATCHER_H
