#include "Player.hpp"
namespace pandemic{
class OperationsExpert:public Player
{
    public:
        OperationsExpert(Board&,int);
        virtual ~OperationsExpert();
        Player& build();
        string role();
};
}
