#ifndef SCIENTIST_H
#define SCIENTIST_H
#include "Player.hpp"
namespace pandemic{
class Scientist:public Player
{
    public:
        Scientist(Board&,int,int);
        virtual ~Scientist();
        void discover_cure(Color);
        string role();
    private:
        int number_of_cards_to_discover;
};
}
#endif // SCIENTIST_H
