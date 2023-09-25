#ifndef GROUND_H
#define GROUND_H
#include<bits/stdc++.h>
#include "Graphic.h"
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <chrono>
#include <thread>
class Ground{
private:
int x,y;
deque<char> ground_1;
deque<char> ground_2;
deque<char> ground_3;
public:
Ground();
int get_x();
int get_y();
void move();
};
#endif