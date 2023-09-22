#include <dos.h>
#define _4KB (4096) /* size of vdu page */
int main( void )
{
int i;
const int attribute = 0x20;
char far *Vid_RAM;
FP_SEG( Vid_RAM ) = 0xb800;
FP_OFF( Vid_RAM ) = 0x0000;
for ( i=0; i<_4KB ; i +=2 )
{
*(Vid_RAM + i) = 'C';
*(Vid_RAM + i + 1) = attribute;
}
getch();
return(0);
} /*--main( )-----------*/ 