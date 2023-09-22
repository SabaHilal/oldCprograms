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
printf("Mouse available\n");
getch();
}
