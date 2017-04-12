#include <stdio.h>
#include <time.h>
#include "E101.h"

int turnleft();

int main(){
	init();
	turnleft();
	set_motor(1,127);
	sleep1(0,500000);
	
	sleep1(0,500000);
	stop (1)

	return 0;
	set_motor(1,127);
	
}
	
int turn_left(int dur) {
	stop (2)
	sleep1(int dur);
	set_motor(2,-127);
	return 0;

	
}
int motor_speed(int motor){
	int speed = read_analog(0);
	
	if (speed > 255){
		speed = 255;
	}
	set_motor(motor, speed);
 	return 0;
}
	
	
