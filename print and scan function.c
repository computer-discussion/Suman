#include <stdio.h>

void main ()
{
	int print, scan, x1,x2,x3;
	char c;
	print = printf ( "12345678. 9012345\n" );
	scan  = scanf  ( "%d%d%d%c", &x1, &x2, &x3, &c);
	
	printf ( "\n\tPrintf - %d, Scanf - %d", print, scan );
}
