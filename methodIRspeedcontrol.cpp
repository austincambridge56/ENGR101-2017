#include <stdio.h>
#include <time.h>
#include "E101.h"

int motor_speed();

int main(){
	init();
	while(1)
	{
	  motor_speed();
    }
    stop(0);
	return 0;
}
	

	int motor_speed(){
	int speed = read_analog(0);
	
	if (speed > 255){
		speed = 255;
	}
	printf("%d\n", speed);
	set_motor(1, speed);
 	return 1;
}
