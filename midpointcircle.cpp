#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
	int xc,yc,x,y,r,gd=DETECT,gm,d;

	initgraph(&gd,&gm,NULL);
	x=0;
	cout<<"Enter radius of a circle"<<endl;
	cin>>r;
	d=5/4-r;
	cout<<"Enter the coordinate ofthe center of circle "<<endl;
	cin>>xc>>yc;
	y=r;
	do
	{  delay(20);
		putpixel(xc+x,yc+y,WHITE);
		putpixel(xc+x,yc-y,WHITE);
		putpixel(xc-x,yc+y,WHITE);
		putpixel(xc-x,yc-y,WHITE);
		putpixel(xc+y,yc+x,WHITE);
		putpixel(xc+y,yc-x,WHITE);
		putpixel(xc-y,yc+x,WHITE);
		putpixel(xc-y,yc-x,WHITE);
		x=x+1;
		if(d<0)
		{
			d=d+2*x+3;
		}
		else
		{
			y=y-1;
			d=d+2*(x-y)+5;
		}
	}
	while(x<y);
	getch();
	closegraph();
	return 0;
	}
