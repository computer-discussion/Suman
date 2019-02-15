#include <stdio.h>
#include <stdlib.h>

#define MAX 500 //Macros

void f1();

int main ()
{
	int x1;
	
	printf ("\nWhether a numer is divisable by 2 & 3\n");
	printf ("\n Enter a numbers = ");
	scanf  ("%d", &x1);
	
	if ( x1%2 == 0 && x1%3 == 0 ) // Logical operator &&, ||, !
	{
		printf ( "\n%d is divisable by 2 and 3\n");
		exit (0);
	}
	
	if ( x1%2 == 0 )
	{
		printf ( "\n%d is divisable by only 2", x1);
	}	
	else if ( x1%3 == 0 )
	{
		printf ( "\n%d is divisable by only 3", x1);
	}
	else
	{
		printf ( "\n%d is not divisable by 2 or 3", x1);
	}
	
	printf ("\n");
	f1();
}

void f1 ()
{
	printf ( "\nInside f1 fuction \n");
}
