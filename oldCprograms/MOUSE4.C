#include <graphics.h>
	#include <dos.h>
	void main()
	{
	  union REGS i,o;
	  //int gd=DETECT,gm;

	  //initgraph(&gd,&gm,"");

	  i.x.ax=0;
	  int86(0x33,&i,&o);

	  if(o.x.ax==0)
	  {
	    //restorecrtmode();
	    printf("No Mouse Available.....");
	    exit();
	  }
	  //rectangle(99,49,501,151);

	  i.x.ax=1;
	  int86(0x33,&i,&o);

	  i.x.ax=7;
	  i.x.cx=100;
	  i.x.dx=500;
	  int86(0x33,&i,&o);

	  i.x.ax=8;
	  i.x.cx=50;
	  i.x.dx=150;
	  int86(0x33,&i,&o);

	  while(!kbhit())
	  ;

	  i.x.ax=2;
	  int86(0x33,&i,&o);

	 restorecrtmode();
	}


