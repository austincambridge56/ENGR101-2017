#include <stdio.h>
#include <time.h>
#include "E101.h"

int main (){
    init();
    int i;
    int adc_reading = 0;
    int maxread = 0;
    for (i=0; i< 5; i++)
    {
      int adc_reading = 0;
      adc_reading = read_analog(0);
      if (adc_reading > maxread)
      {maxread = adc_reading;}
      printf("i=%d adc_reading=%d\n",i,adc_reading);
     }
     printf("adc_reading =%d\n",adc_reading);
     printf ("maxread = %d\n", maxread);

  set_motor(1,255);
	sleep1(0,500000);
	set_motor(2,255);
	sleep1(0,500000);
	set_motor(1,0);
	set_motor(1,0);
    stop(0);

int turnleft(int duration);


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
