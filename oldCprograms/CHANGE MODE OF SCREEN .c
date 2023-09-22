/* CHANGE MODE OF SCREEN */
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
     {
         	_AH=0;
        	_AL=1;
         	geninterrupt(0x10);
         	printf(“mode:40 by 25,press a key”);
	getch();
      	_AH=0;
      	_AL=3;
      	geninterrupt(0x10);
        	printf(“mode:80 by 25 ,press a key”);
   	getch();
      }

