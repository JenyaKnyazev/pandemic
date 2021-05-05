#ifndef DISPATCHER_H
#define DISPATCHER_H
#include "Player.hpp"
namespace pandemic{
class Dispatcher:public Player
{
    public:
        Dispatcher(Board&,int);
        virtual ~Dispatcher();
        Player& fly_direct(int);
        string role();
};
}
#endif // DISPATCHER_H
