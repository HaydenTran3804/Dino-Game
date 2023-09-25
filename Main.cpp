#include <bits/stdc++.h>
#include "Ground.cpp"
#include "Dino.cpp"
#include "Cactus.cpp"
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <chrono>
#include <thread>
using namespace std;
int main(){
    Dino dino;
    Ground grd;
    Cactus cactus;
    int crl = 0;
    int cnt = 3;
	while(true){
	if(kbhit()){
		switch(getch()){
			case 'w': crl = 2;break;
			
		}
		grd.move();
		
	
	} else{
	grd.move();	
	dino.draw();
	dino.jump(crl);
	}
	if(cnt == 3){
	dino.foot(crl);
} else if(cnt > 3){
	cnt = 0;
}
	cnt++;
	cactus.move();
	if(dino.get_x() + 13 == cactus.get_first().front() && dino.get_y() >= 19){
		dino.set_lose();
		dino.draw();
		
	cactus.move();
		system("PAUSE");
		cout << "You Lose";
	}
	this_thread::sleep_for(std::chrono::milliseconds(30));
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),{0,0});

}                          	  
}