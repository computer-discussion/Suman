#include <stdio.h>

int factorial ( int num, int space )
{
	int i;

	printf ("\n");
	for (i=0; i<space; i++)
	{
		printf ( "    ");
	}
	printf ( "%d", num);
	
	if ( num == 0 || num == 1 )
		return 1;
	else
		return ( num * factorial(num-1, ++space) );
}

int power ( int num, int pow )
{
	if ( pow == 0 )
		return 1;
	else
		return ( num * power (num, pow-1));
}

void main ()
{
	int f;
	printf ( "\nEnter a number = ");
	scanf ("%d", &f);
	
	f = factorial(f,1);
	
	printf ( "\nResult = %d", f);
	
	printf ( "\n %d", power(4, 5));
}
