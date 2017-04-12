#include <stdio.h>
#include <time.h>
#include "E101.h" 

int main(){
	//This sets up the RPi hardware and ensures 
	//everything is working correctly
	init();
	//We declare an integer variable to store the ADC data
	int adc_reading;
	//Reads from Analog Pin 0 (A0) 
	adc_reading = read_analog(0);
	adc_reading = read_analog(2);
	adc_reading = read_analog(4);
	//Prints read analog value 
	printf("%d\n",adc_reading); 
	//Waits for 0.5 seconds (500000 microseconds)
	sleep1(0,500000); 
return 0;}v
