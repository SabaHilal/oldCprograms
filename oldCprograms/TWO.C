#include <conio.h>
void main()
{
char far *scr=(char far *)0xb8000000;
int i;
for(i=0;i<1000;i+=2)
{
*(scr+i)= 42;
*(scr+i+1)= 1;    //try 1, 2, 4, 8, 16, 32, 64..
}
for(i=1000;i<2000;i+=2)
{
*(scr+i)= 42;
*(scr+i+1)= 2;    //try 1, 2, 4, 8, 16, 32, 64..
}
for(i=2000;i<3000;i+=2)
{
*(scr+i)= 42;
*(scr+i+1)=4;    //try 1, 2, 4, 8, 16, 32, 64..
}
for(i=3000;i<4000;i+=2)
{
*(scr+i)= 42;
*(scr+i+1)= 32;    //try 1, 2, 4, 8, 16, 32, 64..
}

getch();

}
