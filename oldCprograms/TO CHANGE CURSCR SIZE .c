/* TO CHANGE CURSCR SIZE */ 
#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
Void main()
        {
           	union REGS inregs ,outregs;                                         /*system defined union*/
           	clrscr();
	inregs.h.ah=0x01; /*service of interrupt 16*/
     	inregs.h.ch=3; /*starting scan line*/
     	inregs.h.c1=4; /*ending scan line*/
    	int86(16,&inregs,&outregs);                                        /*funtion to call system interrupt*/
       	getch();
          } 

                                                                                
