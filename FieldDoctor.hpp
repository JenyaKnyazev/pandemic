#ifndef FIELDDOCTOR_H
#define FIELDDOCTOR_H
#include "Player.hpp"
#include <string>
namespace pandemic{
class FieldDoctor:public Player
{
    public:
        FieldDoctor(Board&,int);
        virtual ~FieldDoctor();
        Player& treat(int);
        std::string role();
};
}
#endif // FIELDDOCTOR_H
