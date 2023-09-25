#include "Ground.h"
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
Ground :: Ground(){
    x = 0;
    y = 32;
    ground_1.push_back('_');
    for(int i = 0;i<120;i++){
    int random = rand() % 15 + 1;
    switch(random){
    	case 1:{
    		ground_2.push_back('.');
    		ground_3.push_back(' ');
			break;
		}
		case 2:{
			ground_2.push_back('-');
    		ground_3.push_back(' ');
			break;
		}
		case 3:{
			ground_2.push_back('`');
    		ground_3.push_back(' ');
			break;
		}
		case 4:{
			ground_2.push_back(248);
    		ground_3.push_back(' ');
			break;
		}
		case 5:{
			ground_2.push_back(' ');
    		ground_3.push_back('.');
			break;
		}
		case 6:{
			ground_2.push_back(' ');
    		ground_3.push_back('-');
			break;
		}
		case 7:{
			ground_2.push_back(' ');
    		ground_3.push_back('`');
			break;
		}
		default:{
			ground_2.push_back(' ');
    		ground_3.push_back(' ');
			break;
		}
	}
}
   	
}
void Ground :: move(){
	
	
	for(int i=0;i<120;i++){
		gotoxy(i,y);
		cout << ground_1.front();
		gotoxy(i,y+1);
		cout<< ground_2.front();
		ground_2.push_back(ground_2.front());
		ground_2.pop_front();
		gotoxy(i,y+2);
		cout<< ground_3.front();
		ground_3.push_back(ground_3.front());
		ground_3.pop_front();
   		int random = rand() % 15 + 1;
		switch(random){
    	case 1:{
    		ground_2.push_back('.');
    		ground_3.push_back(' ');
			break;
		}
		case 2:{
			ground_2.push_back('-');
    		ground_3.push_back(' ');
			break;
		}
		case 3:{
			ground_2.push_back('`');
    		ground_3.push_back(' ');
			break;
		}
		case 4:{
			ground_2.push_back(248);
    		ground_3.push_back(' ');
			break;
		}
		case 5:{
			ground_2.push_back(' ');
    		ground_3.push_back('.');
			break;
		}
		case 6:{
			ground_2.push_back(' ');
    		ground_3.push_back('-');
			break;
		}
		case 7:{
			ground_2.push_back(' ');
    		ground_3.push_back('`');
			break;
		}
		default:{
			ground_2.push_back(' ');
    		ground_3.push_back(' ');
			break;
		}
	}
	}
    
}
int Ground :: get_x(){
    return x;
}
int Ground :: get_y(){
    return y;
}