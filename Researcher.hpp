#ifndef RESEARCHER_H
#define RESEARCHER_H
#include "Player.hpp"
namespace pandemic{
class Researcher:public Player
{
    public:
        Researcher(Board&,int);
        virtual ~Researcher();
        Player& discover_cure(Color);
        string role();
};
}
#endif // RESEARCHER_H
