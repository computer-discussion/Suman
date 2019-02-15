/*
Program 1:
	Write a program which will find all factors of a number
*/
#include <stdio.h>
#include <stdlib.h>

void factors ( int num )
{
	int i;
	printf ( "\nAnswer: \n");
	if ( num == 0 )
	{
		printf ( "All integers are factor of zero.\n");
		return;
	}
	else if ( num == 1 )
	{
		printf ( "1\n");
	}
	else // num >= 2
	{
		printf ( "1, ");
		for ( i=2; i<=num/2; i++)
		{
			if ( num%i == 0)
				printf ( "%d, ", i);
		}
		printf ("\b\b \n");
	}
}

int main ()
{
	int num1, num2;
	
	printf ( "\nProgram Starts\n" );
	printf ( "\n*********************");
	printf ( "\n Input  = One Positive Integer number ");
	printf ( "\n Output = All factors of that number ");
	printf ( "\n*********************\n");
	printf ( "\nEnter a number- ");
	scanf  ( "%u", &num1);
	
	if ( num1 < 0 )
	{
		printf ( "\nPlease try with positive numbers \n");
	}
	else
	{
		factors(num1);
	}
	
	printf ( "\nProgram Ends\n" );
	return 0;
}
