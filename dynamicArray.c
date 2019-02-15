#include <stdio.h>
#include <stdlib.h>

/*
 return_type function_name ( data_type1 variable_name1, data_type2 variable_name2, ... )
 E.g -
 int func1 ( int x, char y, float z) 
 void func2 ( int x, int y )
*/
void error_condition ( int num )
{
	if ( num < 0 )
	{
		printf ("\nError1:Array size must be +ve ");
		exit (1);
	}
}

int main ()
{
	int *arr;
	int i, size_of_array;
	
	printf ( " \nEnter the size of the array - " );
	scanf  ( "%d", &size_of_array );
	
	error_condition( size_of_array );
	
	arr = (int *) malloc ( sizeof (int) * size_of_array );
	
	for ( i=0; i<size_of_array; i++)
	{
		arr[i] = i+100;
	}
	
	for ( i=0; i<size_of_array; i++)
	{
		printf ( "%d  ", arr[i]); // = i+100;
	}
}
