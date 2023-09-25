#include "Cactus.h"
#include<bits/stdc++.h>
using namespace std;

Cactus :: Cactus(){
	x = 108;
	y = 28;
	body[0]	= "  |       ";
	body[1]	= "| |       ";
	body[2]	= "|_| |     ";
	body[3]	= 	"|_|	 ";
	body[4]	=   "|";
	cactus_pos.push_back(x);
}
void Cactus :: draw(int x_tmp){
	gotoxy(x_tmp,y);
	cout << body[0];
	gotoxy(x_tmp,y+1);
	cout << body[1];
	gotoxy(x_tmp,y+2);
	cout << body[2];
	gotoxy(x_tmp+2,y+3);
	cout << body[3];
	gotoxy(x_tmp+2,y+4);
	cout << body[4];
}
void Cactus :: clear(){
	gotoxy(1,y);
	cout << "         ";
	gotoxy(1,y+1);
	cout << "         ";
	gotoxy(1,y+2);
	cout << "         ";
	gotoxy(1,y+3);
	cout << "         ";
	gotoxy(1,y+4);
	cout << "         ";
}
void Cactus :: move(){
	int size = cactus_pos.size();
	while(size--){
		int tmp = cactus_pos.front();
		cactus_pos.pop_front();
		gotoxy(tmp+2,y+3);
		cout << "      ";
		gotoxy(tmp+1,y+4);
		cout << " ";
		draw(tmp);
		tmp -= 1;
		if(tmp > 0 ){
			cactus_pos.push_back(tmp);	
			Cactus :: clear();
		}
		if(tmp == 50){
			cactus_pos.push_back(x);
		}
			
	}
}
deque<int> Cactus :: get_first(){
	return cactus_pos;
}