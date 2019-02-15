#include <stdio.h>

int main ()
{
	int x1, x2;
	
	printf ("\nRelation between two numbers.\n");
	printf ("\n Enter two numbers = ");
	scanf  ("%d%d", &x1, &x2);
	
	printf ( "\nRelation between two number is as follows - \n%d", x1);
	if ( x1 > x2 )	//Relational Operator >, <, ==, !=, >=, <=
		printf ( " > ");
	else if ( x1 == x2 )
		printf ( " = ");
	else
		printf ( " < ");
	
	printf ("%d\n", x2);
}
