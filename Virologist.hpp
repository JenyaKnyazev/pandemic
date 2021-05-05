#ifndef VIROLOGIST_H
#define VIROLOGIST_H
#include "Player.hpp"
namespace pandemic{
class Virologist:public Player
{
    public:
        Virologist(Board&,int);
        virtual ~Virologist();
        Player& treat(int c)override;
        string role()override;
};
}
#endif // VIROLOGIST_H
