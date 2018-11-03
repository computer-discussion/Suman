#include<stdarg.h>
#include<stdio.h>

int sum (int arg1, int arg2, ...)
{
	int i;
	int sum = arg2;

	va_list x;
	va_start (x, arg2);
	
	for (i=0; i<arg1-1; i++)
	{
		sum = sum + va_arg(x, int);
	}
	
	va_end (x);
	
	return sum;
}


void main ()
{
	printf ("\n 1 = %d ", sum(1, 10));
	printf ("\n 2 = %d ", sum(2, 10, 20));
	printf ("\n 5 = %d ", sum(5, 10, 20, 30, 40, 50));
	printf ("\n 3 = %d ", sum(3, 10, 20, 160));
}
