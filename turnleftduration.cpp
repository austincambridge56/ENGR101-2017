#include <stdio.h>
#include <time.h>
#include "E101.h"

int turnleft(int duration);

int main(){
	init();
	turnleft(2);
	set_motor(1,255);
	sleep1(0,500000);
	set_motor(2,255);
	sleep1(0,500000);
	set_motor(1,0);
	sleep1(0,500000);
	set_motor(1,255);
	set_motor(1,0);
    stop(0);
	return 0;
	
}
	
int turnleft(int duration) {
	set_motor(1,255);
	set_motor(2,255);
	sleep1(duration,0);
	set_motor(1,0);
	return 0;
	
}
