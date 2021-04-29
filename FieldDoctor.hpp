#ifndef FIELDDOCTOR_H
#define FIELDDOCTOR_H
#include "Player.hpp"
#include <string>
class FieldDoctor:public Player
{
    public:
        FieldDoctor(Board&,int);
        virtual ~FieldDoctor();
        void treat(int);
        std::string role();
};

#endif // FIELDDOCTOR_H
