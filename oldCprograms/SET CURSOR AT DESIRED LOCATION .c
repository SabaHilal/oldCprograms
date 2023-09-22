/* TO SET CURSOR AT DESIRED LOCATION */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#define video 0x10
Void movetoxy(int x,int y)
         {
          	 union regs regs;
	 regs.h.ah=2;    /*service to set cursor position*/
	 regs,h.dh=y;     /*row number*/
	 regs.h.d1=x;     /*coloumn number*/regs.h.bh=0;     /*video page 0*/
	 int86(video ,&regs ,&regs);
        }
Void main(void);
        {
              	clrscr();
	movetoxy(35,10);  /*call to pre defined function*/
               	printf(“hello\n”);
                	getch();
         } 

