/* TO KNOW TOTAL MEMORY USING INTERUPT */
#include<stdio.h>
#include<dos.h>
void  main()
        {
	       union  REGS  inregs, outregs;       /*union REGS is declared in <dos.h>*/
	int memsize;
	int86(18,&inregs,&outregs);                         
  	memsize=outregs.x.ax;
	clrscr();
	printf("\n total memory=%u",memsize);
	getch();                               }
