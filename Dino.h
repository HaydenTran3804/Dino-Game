#ifndef DINO_H
#define DINO_H
#include<bits/stdc++.h>
#include "Graphic.h"
using namespace std;
class Dino{
    private:
    int x,y,left_foot,right_foot;
    string body[8];
    public:
    Dino();
    void jump(int &crl);
    int get_x();
    int get_y();
    void draw();
    void foot(int crl);
    void set_lose();
};
#endif