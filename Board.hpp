#include<iostream>
#ifndef BOARD_HPP
#define BOARD_HPP

using namespace std;
namespace pandemic{
class Board
{
    public:
        Board();
        virtual ~Board();
        int& operator[](int);
        int can_drive(int,int);
        int get_health(int);
        int get_color(int);
        void build(int);
        int is_lab(int);
        int is_clean();
        void discover_cure(int);
        int is_discovered_cure(int);
        friend ostream& operator<<(ostream&,Board&);
        void remove_cures();
    private:
        int* cities_health;
        int* cities_labs;
        int* colors;
        int* cures;
        int** drives;
};
}
#endif
