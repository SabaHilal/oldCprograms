#include <dos.h>
#define ON (1)
#define OFF (0)
#define SCROLLLOCK (1 << 4)
#define NUMLOCK (1 << 5)
#define CAPSLOCK (1 << 6)
void SetKbdStatus( int lockname, int status )
{
char far* kbdstatus = (char far*)0x00400017UL;
disable( );
if ( status==ON )
*kbdstatus |= (char)lockname;
else
*kbdstatus &= ~(char)lockname;
enable( );
} /*--SetKbdStatus( )--------*/
int GetShiftFlags( void )
{
asm{
MOV AH, 2h;
INT 16h;
}
return( _AL );
} /*--GetShiftFlags( )------*/
int main( void )
{
SetKbdStatus( CAPSLOCK, ON );
SetKbdStatus( NUMLOCK, ON );
GetShiftFlags( ); /* Ignore the return value */
//getch();
return(0);
} /*--main( )--------*/ 