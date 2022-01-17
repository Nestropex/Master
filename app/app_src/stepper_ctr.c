#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#define D_GPIO_STEP 0
#define D_GPIO_DIR  1
#define D_GPIO_DELAY 1
#define D_CYCLES 100000

int main(int argc, char *argv[])
{
	char *p;
	//int num;

	unsigned int ui_arg1 = strtoul(argv[argc-3],&p,10);
	unsigned int ui_arg2 = strtoul(argv[argc-2],&p,10);
	unsigned int ui_arg3 = strtoul(argv[argc-1],&p,10);


	unsigned int uint_cycles_max = ui_arg2;
	unsigned int uint_cycles = 1;
	unsigned int uint_switch_cycles = ui_arg3;
	unsigned int uint_dir_switch = 1;
	wiringPiSetup();
	pinMode(D_GPIO_STEP,OUTPUT);
	pinMode(D_GPIO_DIR, OUTPUT);
	digitalWrite(D_GPIO_DIR, 0);
	unsigned int uint_frequency = ui_arg1;

	unsigned long int delay = (unsigned long int)10000/uint_frequency;
	delay = (100*delay)/2; 
	
	while(uint_cycles < uint_cycles_max)
	{
		delayMicroseconds(delay);
		digitalWrite(D_GPIO_STEP, 0);
		delayMicroseconds(delay);
		digitalWrite(D_GPIO_STEP, 1);
		uint_cycles++;
	
		if((uint_cycles % uint_switch_cycles) == 0)
		{
			if(uint_dir_switch == 0)
			{
				//digitalWrite(D_GPIO_DIR, 1);
				uint_dir_switch = 0;
			}
			else
			{
				//digitalWrite(D_GPIO_DIR, 0);
				uint_dir_switch = 0;
			}

		}
	}

return 0;
}
