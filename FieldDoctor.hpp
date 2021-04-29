#ifndef FIELDDOCTOR_H
#define FIELDDOCTOR_H
#include "Player.hpp"

class FieldDoctor:public Player
{
    public:
        FieldDoctor(Board&,int);
        virtual ~FieldDoctor();
        void treat(int);
};

#endif // FIELDDOCTOR_H
