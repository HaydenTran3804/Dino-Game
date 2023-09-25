#include "Dino.h"
#include<bits/stdc++.h>
using namespace std;

Dino :: Dino(){
    x = 17;
    y = 25;
    right_foot = 1;
    left_foot = 0;
    body[0] =   "           o o ";
    body[1] =   "           oooo";
    body[2] =   "       o   ||  ";
    body[3] =   "        ooooo  ";
    body[4] =   "       oooooo  ";
    body[5] =   "       o   o   ";
    body[6] =   "       o   o   ";
    body[7] =          "oo  oo";

}
int Dino :: get_x(){
    return x;
}
int Dino :: get_y(){
    return y;
}
void Dino :: draw(){
	gotoxy(x,y);
	cout << body[0];
	gotoxy(x,y+1);
	cout << body[1];
	gotoxy(x,y+2);
	cout << body[2];
	gotoxy(x,y+3);
	cout << body[3];
	gotoxy(x,y+4);
	cout << body[4];
	gotoxy(x,y+5);
	cout<< body[5];
	gotoxy(x,y+6);
	cout << body[6];
	gotoxy(x+7,y+7);
	cout << body[7];
}
void Dino :: jump(int &crl){
	if(crl == 2){
		if(y == 11){
			crl = 1;
			Dino::draw();
		}
		
		y--;
		draw();
		gotoxy(x,y+8);
		cout << "               ";	
		
		
	}
	if(crl == 1){
		if(y == 24){
			crl = 0;
			Dino::draw();
		}
		y++;
		draw();
		gotoxy(x,y-1);
		cout << "               ";
	}
}
void Dino :: foot(int crl){
	if (crl != 0){
		body[6] =   "       o   o   ";
    	body[7] =          "oo  oo";
	} else
	if(right_foot){
		body[6] = "       oo  o   ";
		body[7] =        "    oo";
		right_foot = 0;
		left_foot = 1;
	} else{
		body[6] =   "       o   oo  ";
		body[7] =          "oo    ";
		right_foot = 1;
		left_foot = 0;
	}
}
void Dino :: set_lose(){
	body[0] =   "           x x "; 
}