/* TO SET SCROLL NUM-LOCK KEY*/
#include<stdio.h>
 #include<conio.h>
   Void main()
      {
           Clrscr();
           char far *scr=(char far*)0x417;
                                       /*far pointer used to access memory*/
           *scr=32; /*address for num-lock key*/
           *scr=16; /*address for scroll lock key*/
       }
