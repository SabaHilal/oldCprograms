/* to set scroll lock key*/
#include<stdio.h>
#include<conio.h>
void main()
       {
char far *scr=(char far*)0x417;
*scr=16;
       }
