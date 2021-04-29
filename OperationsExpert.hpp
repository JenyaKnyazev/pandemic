#include "Player.hpp"
class OperationsExpert:public Player
{
    public:
        OperationsExpert(Board&,int);
        virtual ~OperationsExpert();
        void build();
        string role();
};
