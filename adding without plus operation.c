#include <stdio.h>
#include <stdlib.h>

void main ()
{
	char *num1;
	char *num2;
	int i, n1, n2, add;
	
	printf ( "\nEnter 2 numbers - " );
	scanf  ( "%d%d", &n1, &n2 );
	
	num1 = (char *) malloc ( sizeof(char) * (n1+1));
	num2 = (char *) malloc ( sizeof(char) * (n2+1));
	
	for (i=0; i<n1; i++)
	{
		num1[i] = 'A';
	}
	num1[n1] = 0;
	
	for (i=0; i<n2; i++)
	{
		num2[i] = 'A';
	}
	num2[n2] = 0;
	
	add = printf ("%s%s",num1,num2);
	
	printf ( "\nResult = %d", add);
}
