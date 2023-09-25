#ifndef CACTUS_H
#define CACTUS_H
#include <bits/stdc++.h>
#include "Graphic.h"
using namespace std;

class Cactus{
private:
int x,y;
string body[5];
deque<int> cactus_pos;
public:
Cactus();
void draw(int x_tmp);
void move();
void clear();
deque<int> get_first();
};
#endif