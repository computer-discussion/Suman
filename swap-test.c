#include <stdio.h>

void swaptest(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
}

void main ()
{
	int a=50,b=456;
	
	swaptest (a,b);
	
	printf ("a = %d b = %d",a,b);
}
