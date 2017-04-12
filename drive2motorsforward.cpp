#include <stdio.h>
#include <time.h>
#include "E101.h"

int main(){
	init();
	set_motor(1,255);
	sleep1(0,500000);
	set_motor(2,255);
	sleep1(0,500000);
	set_motor(1,0);
	set_motor(1,0);
    stop(0);
	return 0;
	
}
