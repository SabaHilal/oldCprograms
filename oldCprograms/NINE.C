/* TO SET CURSOR AT DESIRED LOCATION */
#include<stdio.h>
#include<dos.h>

void movetoxy(int x,int y)
	 {
	 union REGS regs;
	 regs.h.ah=2;    /*service to set cursor position*/
	 regs.h.dh=y;     /*row number*/
	 regs.h.dl=x;     /*coloumn number*/
	 regs.h.bh=0;     /*video page 0*/
	 int86(0x10 ,&regs ,&regs);
	}
void main(void)
        {
	clrscr();
	movetoxy(10,40);  /*call to pre defined function*/
	printf("hello\n");
	getch();
	 }