#include<graphics.h>
main()
{
	int gd=0, gm; //condn of auto-detection
	//gd=0 there is no. for every graphic driver
	//gm tells in which mode gd works
	initgraph(&gd,&gm,""); //initgraph(graphic driver,graphic mode,"path of gd file");
	//declaration in graphics.h
	circle(100,80,20);
	closegraph();
}



