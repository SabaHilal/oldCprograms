#include <conio.h>
void main()
{
char far *scr=(char far *)0xb8000000;
int i,j,k;
for(j=0;j<26;j++)
{
for(i=0;i<4000;i+=2)
{
*(scr+i)=j+65;
*(scr+i+1)=j;
}
getch();

}
}