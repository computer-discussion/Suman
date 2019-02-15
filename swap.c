#include <stdio.h>

void swap ( int a, int b )
{
	a = a + b;
	b = a - b;
	a = a - b;
	
	//printf (" \n a = %d b = %d ", a, b); // a = 200, b = 100
}

void swapUsingAddress ( int *a, int *b )
{
	/*
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	*/
	*a = *b;
	*b = 5000;
}

void main ()
{
	int a=100, b=200;
	//printf ( "\nEnter two numbers - ");
	//scanf  ( "%d%d", &a, &b);
	printf (" \n a = %d b = %d ", a, b); // a = 100, b = 200
	swap (a, b);
	printf (" \n a = %d b = %d ", a, b); // a = 100, b = 200
	swapUsingAddress( &a, &b );
	printf (" \n a = %d b = %d ", a, b); // a = 200, b = 100
}
