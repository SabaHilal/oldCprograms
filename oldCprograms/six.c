/*Program to show which mouse button was clicked*/
#include <stdio.h>
#include <dos.h>

void main()
{

int x, y, buttons;
union REGS regs;
regs.x.ax=0;
int86(0x33,&regs,&regs);
if (regs.x.ax==0)
{
printf("no mouse available");
exit(1);
}
clrscr();
gotoxy(40,1);
printf("press both buttons to exit\n");
do
{
regs.x.ax=3;
int86(0x33, &regs, &regs);
buttons=regs.x.bx & 3;
if (buttons==1) {gotoxy(40,40);printf("\n Left Mouse button Pressed\n");}
if (buttons==2) {gotoxy(40,40);printf("\nRight Mouse button Pressed\n");}
}while(buttons!=3);
gotoxy(40,40);
printf("\nLeft and Right Mouse pointers were clicked .. Press a key to exit");
getch();
}