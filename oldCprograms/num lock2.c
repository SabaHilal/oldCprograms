/* to set num lock key*/
#include<stdio.h>
 #include<conio.h>
  Void main()
       {
             clrscr();
              Char far *scr=(char far*)0x417; 
                                    /*far pointer is used to access memory*/
              *scr=16;
       }

