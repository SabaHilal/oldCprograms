/* A program to show screen full of characters
in different foreground and background colors*/

#include <conio.h>
void main()
{
char far *scr=(char far *)0xb8000000;
int i,j;
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
