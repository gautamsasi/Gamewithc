/* Author : Gautam Sasi
   Date   : 10/15/2014
   Project: Ball game
*/




#include<stdio.h>
#include<stdlib.h>
#include<linux/input.h>
#include<fcntl.h>
#include<graphics.h>
#include <X11/Xlib.h>
#include<time.h>

float x = 200.0f;
float y = 200.0f;
float r = 25.0f;

time_t t,nt, diff;

int initialize()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	circle(x,y,r);
	//getch();
	//closegraph();
	return 0;
}
Top_go()
{
	closegraph();
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	y-=50.0f;

	if(x < 10.0f || y < 10.0f || x > 600.0f || y > 480.0f)
	{
		printf("Game Over\n");
		exit(1);
	}


	circle(x,y,r);
	printf("%f,%f\n", x, y);
	//getch();
	//closegraph();
	return 0;
}
Down_go()
{
	closegraph();
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	y+=50.0f;

	if(x < 10.0f || y < 10.0f || x > 600.0f || y > 480.0f)
	{
		printf("Game Over\n");
		exit(1);
	}

	circle(x,y,r);
	printf("%f,%f\n", x, y);
	//getch();
	//closegraph();
	return 0;	
}
Right_go()
{
	closegraph();
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	x+=50.0f;

	if(x < 10.0f || y < 10.0f || x > 600.0f || y > 480.0f)
	{
		printf("Game Over\n");
		exit(1);
	}

	circle(x,y,r);
	printf("%f,%f\n", x, y);
	//getch();
	//closegraph();
	return 0;	
}

Left_go()
{
	closegraph();
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);
	x-=50.0f;

	if(x < 10.0f || y < 10.0f || x > 600.0f || y > 480.0f)
	{
		printf("Game Over\n");
		exit(1);
	}
		
	circle(x,y,r);
	printf("%f,%f\n", x, y);
	//getch();
	//closegraph();
	return 0;	
}
