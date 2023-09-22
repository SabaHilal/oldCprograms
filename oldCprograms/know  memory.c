/* TO KNOW TOTAL MEMORY USING INTERUPT */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
   main()
        {
              	union  REGS  inregs, outregs;                        /*union REGS is declared in <dos.h>*/
	int memsize;
	int86(18,&inregs,&outregs);                          /*18 is memory size service and           
                     int86 function is used to call this service*/
  	memsize=outregs.x.ax;
       	printf(“\n total memory=%u”,memsize);
 	getch();
         }

