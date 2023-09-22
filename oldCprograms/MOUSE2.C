#include <conio.h>
#include <dos.h>

void main()
{
union REGS iregs, oregs;
iregs.x.ax=0;
int86(0x33,&iregs,&oregs);
if (oregs.x.ax==0)
{
printf("no mouse available");
exit(1);
}
iregs.x.ax=1;
int86(0x33,&iregs,&oregs);
clrscr();
gotoxy(1,1);
printf("Now showing mouse pointer\n");
getch();
iregs.x.ax=2;
int86(0x33,&iregs,&oregs);
clrscr();
gotoxy(1,1);
printf("Mouse pointer hidden");
getch();


}
