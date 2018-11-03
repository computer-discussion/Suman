#include<stdio.h>

void swap(int *a , int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void main ()
{
	int a = 10 , b = 5;
	
	printf ("a = %d b = %d",a,b);
	
	swap (&a,&b);
	
	printf ("a = %d b = %d",a,b);
}
