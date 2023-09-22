/* CURRENT DIRECTORY*/
# include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(void)
       {
       union REGS inregs,outregs;                    /*system defined union*/
	char buffer[64];
	clrscr();
	inregs.h.ah=0x47;                             
	inregs.x.si=(int)buffer;
	inregs.h.dl=0;
	intdos(&inregs,&outregs);                     /*execute dos interrupt 21*/
	if(outregs.x.cflag!=0)
	printf("drive is invalid");
	else
	printf("the current directory is: %s\n",buffer);
	getch();
	}