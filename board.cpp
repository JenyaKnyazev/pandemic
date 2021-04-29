#include "Board.hpp"
#include <iostream>
using namespace std;
Board::Board()
{
    cities_health = new int[48];
    cities_labs = new int[48];
    colors = new int[48];
    cures = new int[4];
    drives=new int*[48];
    for(int i=0;i<48;i++){
        cities_health[i] = 0;
        cities_labs[i] = 0;
    }
    for(int i=0;i<4;i++)
        cures[i] = 0;
    drives[0]= new int[5]{14,35,25,7,-1};
    drives[1]= new int[4]{47,28,9,-1};
    drives[2]= new int[6]{14,45,17,36,7,-1};
    drives[3]= new int[6]{20,13,12,15,8,-1};
    drives[4]= new int[3]{40,41,-1};
    drives[5]= new int[6]{27,28,39,6,22,-1};
    drives[6]= new int[3]{39,5,-1};
    drives[7]= new int[5]{2,36,0,14,-1};
    drives[8]= new int[6]{3,15,32,10,20,-1};
    drives[9]= new int[6]{37,24,27,1,30,-1};
    drives[10]=new int[6]{45,17,32,8,20,-1};
    drives[11]=new int[5]{42,29,35,24,-1};
    drives[12]=new int[5]{13,26,15,3,-1};
    drives[13]=new int[7]{41,44,26,12,3,20,-1};
    drives[14]=new int[7]{29,42,31,2,7,0,-1};
    drives[15]=new int[5]{8,3,13,43,-1};
    drives[16]=new int[3]{19,18,-1};
    drives[17]=new int[6]{45,10,32,36,2,-1};
    drives[18]=new int[5]{7,21,19,16,-1};
    drives[19]=new int[4]{21,18,16,-1};
    drives[20]=new int[5]{10,13,3,8,-1};
    drives[21]=new int[4]{39,19,18,-1};
    drives[22]=new int[4]{27,5,38,-1};
    drives[23]=new int[5]{33,25,35,11,-1};
    drives[24]=new int[4]{37,9,27,-1};
    drives[25]=new int[6]{33,23,35,0,39,-1};
    drives[26]=new int[5]{13,44,43,12,-1};
    drives[27]=new int[6]{24,9,28,5,22,-1};
    drives[28]=new int[5]{27,1,47,5,-1};
    drives[29]=new int[4]{35,11,14,-1};
    drives[30]=new int[4]{9,47,33,-1};
    drives[31]=new int[4]{42,14,45,-1};
    drives[32]=new int[4]{17,10,8,-1};
    drives[33]=new int[5]{30,47,25,23,-1};
    drives[34]=new int[3]{46,44,-1};
    drives[35]=new int[6]{25,23,11,29,0,-1};
    drives[36]=new int[4]{7,2,17,-1};
    drives[37]=new int[3]{24,9,-1};
    drives[38]=new int[2]{22,-1};
    drives[39]=new int[5]{6,5,25,21,-1};
    drives[40]=new int[4]{4,41,46,-1};
    drives[41]=new int[6]{4,40,46,44,13,-1};
    drives[42]=new int[4]{11,14,31,-1};
    drives[43]=new int[3]{15,26,-1};
    drives[44]=new int[5]{41,13,34,26,-1};
    drives[45]=new int[5]{31,2,17,10,-1};
    drives[46]=new int[4]{40,41,34,-1};
    drives[47]=new int[5]{28,1,30,33,-1};
    colors[0]=1;colors[1]=0;colors[2]=1;colors[3]=2;colors[4]=2;
    colors[5]=3;colors[6]=3;colors[7]=1;colors[8]=1;colors[9]=0;
    colors[10]=1;colors[11]=0;colors[12]=2;colors[13]=2;colors[14]=1;
    colors[15]=2;colors[16]=3;colors[17]=1;colors[18]=3;colors[19]=3;
    colors[20]=1;colors[21]=3;colors[22]=3;colors[23]=0;colors[24]=3;
    colors[25]=0;colors[26]=2;colors[27]=3;colors[28]=3;colors[29]=0;
    colors[30]=0;colors[31]=1;colors[32]=1;colors[33]=0;colors[34]=2;
    colors[35]=0;colors[36]=1;colors[37]=0;colors[38]=3;colors[39]=3;
    colors[40]=2;colors[41]=2;colors[42]=0;colors[43]=2;colors[44]=2;
    colors[45]=1;colors[46]=2;colors[47]=0;

}

Board::~Board()
{
    delete[] cities_health;
    delete[] cities_labs;
    delete[] colors;
    delete[] cures;
    for(int i=0;i<48;i++)
        delete[] drives[i];
    delete[] drives;
    //free(drives);
}
int& Board::operator[](int index){
    return cities_health[index];
}
int Board::can_drive(int city1,int city2){
    for(int i=0;drives[city1][i]!=-1;i++)
        if(drives[city1][i]==city2)
            return 1;
    return 0;
}
int Board::get_health(int city1){
    return cities_health[city1];
}
int Board::get_color(int city1){
    return colors[city1];
}
void Board::build(int city1){
    cities_labs[city1]=1;
}
int Board::is_lab(int city){
    return cities_labs[city]!=0;
}
int Board::is_clean(){
    for(int i=0;i<48;i++)
        if(cities_health[i]!=0)
            return 0;
    return 1;
}
void Board::discover_cure(int color){
    cures[color]=1;
}
int Board::is_discovered_cure(int color){
    return cures[color]!=0;
}
ostream& operator<<( ostream &output,Board&) {
         output <<"Nothing"<<endl;
         return output;
}








