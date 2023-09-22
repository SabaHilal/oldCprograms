/* DIRECTORY CODE & ITS NAME */
# include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(void)
       {
               	union REGS integers,outregs;                                          /*system defined union*/
                	Char buffer[64];
                	Clrscr();
	intregs.h.ah=0x47;                                                            /*access to video  memory*/
	intregs.x.si=(int)buffer;
   	intregs.h.dl=0;
   	intdos(&intregs,&outregs);                                              /*execute dos interrupt 0x21*/
    	if(outregs.x.cflag!=0)
	    	printf(“drive is invalid”);
	else
        		printf(“the current direcyory is: %s\n”,buffer);
 	getch();
        }

