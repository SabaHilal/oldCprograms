/* TO CHANGE CURSOR SIZE */ 
#include <stdio.h>
#include <dos.h>

void main()
	{
	union REGS inregs ,outregs;     /*system defined union*/
        clrscr();
	inregs.h.ah=0x01; /*service of interrupt 16*/
	inregs.h.ch=1; /*starting scan line*/
	inregs.h.cl=4; /*ending scan line*/
	int86(16,&inregs,&outregs);  /*funtion to call system interrupt*/
	getch();
	}