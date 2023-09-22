/*Program to show mouse pointer position*/
#include <conio.h>
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
regs.x.ax=1;
int86(0x33,&regs,&regs);
do
{
regs.x.ax=3;
int86(0x33, &regs, &regs);
buttons=regs.x.bx & 3;
x=regs.x.cx;
y=regs.x.dx;
gotoxy(1,1);
printf("x=%3d,y=%3d",x,y);
}while(buttons!=3);
regs.x.ax=2;
int86(0x33,&regs,&regs);
clrscr();
gotoxy(1,1);
printf("Mouse pointer hidden");
getch();
}
