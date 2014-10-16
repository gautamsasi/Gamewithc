/* Author : Gautam Sasi
   Date   : 10/15/2014
   Project: Ball game
*/


#include "game.h"


static const char *const evval[3] = {
    "RELEASED",
    "PRESSED ",
    "REPEATED"
};

int main()
{
	//XInitThreads();
	struct input_event ev;
	ssize_t n;
	int fd = open("/dev/input/by-path/platform-i8042-serio-0-event-kbd", O_RDONLY);
	if(fd == -1)
	{
		fprintf(stderr, "Cannot open file\n");
		exit(1);
	}
	
	initialize();
	time(&t);
	diff = 0.0;
	while(diff < 10)
	{
		n = read(fd, &ev, sizeof(ev));
		if(ev.type == EV_KEY && ev.value >= 0 && ev.value <= 2)
		{
			printf("%s 0x%04x (%d)\n", evval[ev.value], (int)ev.code, (int)ev.code);
		}
		if((int)ev.code == 103)
		{
			//printf("Top button\n");
			closegraph();
			Top_go();
		}

		if((int)ev.code == 105)
		{
			//printf("Left button\n");
			Left_go();
		}		

		if((int)ev.code == 108)
		{
			//printf("Down button\n");
			Down_go();
		}		
		
		if((int)ev.code == 106)
		{
			//printf("Right button\n");
			Right_go();
		}

		time(&nt);

		diff = difftime(nt,t);
	}
}
