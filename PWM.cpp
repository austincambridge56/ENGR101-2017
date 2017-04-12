#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
	init();
	set_motor(1,0);
	sleep1(0,500000);
	set_motor(1,51);
	sleep1(0,500000);
	set_motor(1,102);
	sleep1(0,500000);
	set_motor(1,153);
	sleep1(0,500000);
	set_motor(1,204);
	sleep1(0,500000);
	set_motor(1,255);
	sleep1(0,500000);
	set_motor(1,0);
	sleep1(0,500000);
	return 0;
}
	 
