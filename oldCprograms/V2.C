#include <conio.h>
void main()
{
char far *scr=(char far *)0xb8000000;
int i,j;
for(j=20;j<100;j+=10)
{
for(i=1;i<4000;i+=2)
{
*(scr+i)=j;
}
getch();

}
}