/*Program to set num lock*/ 
#include<stdio.h>
 #include<conio.h>
  Void main()
       {
             clrscr();
              Char far *scr=(char far*)0x417; 
                                    /*far pointer is used to access memory*/
              *scr=64;
       }
                  

