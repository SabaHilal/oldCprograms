#include <conio.h>
#include <dos.h>

void main()
{
union REGS regs;
char far *scr=(char far *)0xA0000000;
int j=0;
unsigned int i;
regs.h.ah=0;
regs.h.al=16;
int86(0x10,&regs,&regs);
printf("Graphics");
for(i=(16*80);i<(38400/4);i+=80)
{
for(j=0;j<20;j++)
{
*(scr+i+j)=0xFF;
}
}
getch();
regs.h.ah=0;
regs.h.al=3;
int86(0x10,&regs,&regs);
printf("Text");
}