/*
Program 3
	Write a program which will sort an array
		Algorithm - 
		1. Create two arrays
		2. Create two arrays dynamically
			a. Input array
			b. Output array
		3. Take numbers from user and save that to input array
		4. Find minimum number from that input array and place that to the first location of output array
		5. Change that minimum number to a Maximum number
		6. Repeat 4 an 5 till end
		7. Print input and output arrays
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void purpose ()
{
	printf ( "\
************************************\n\
This a program which will sort an array \n\
	Algorithm - \n\
		1. Create two arrays \n\
		2. Create two arrays dynamically \n\
			a. Input array \n\
			b. Output array \n\
		3. Take non-zero and positive numbers from user and save that to input array \n\
		4. Find minimum number from that input array and place that to the first location of output array \n\
		5. Change that minimum number to a Maximum number \n\
		6. Repeat 4 an 5 till end \n\
		7. Print input and output arrays\n\
************************************\n");
}

void print_array (  unsigned int *arr,
					unsigned int size)
{
	unsigned int index;
	printf ( "\nPrint array - ");
	for (index=0; index<size; index++)
	{
		printf ( " %u, ", arr[index] );
	}
	
	printf ( "\b\b " );
}

void selection_sort ( 	unsigned int *in_arr, 
						unsigned int *out_arr,
						unsigned int size )
{
	unsigned int minNumIndex;
	unsigned int MAX = -1;
	unsigned int id1,id2;
	
	for ( id1=0; id1<size; id1++ )
	{
		minNumIndex = 0;
		for ( id2=1; id2<size; id2++ )
		{
			if ( in_arr[minNumIndex] > in_arr[id2] )
				minNumIndex = id2;
		}
		
		out_arr [id1] = in_arr[minNumIndex];
		in_arr[minNumIndex] = MAX;
	}
	
	
	print_array ( out_arr, size );
}

int main ()
{
	unsigned int *in_array, *out_array, size_of_array;
	unsigned int i,j;
	purpose ();
	
	/* initialize random seed: */
	srand (time(NULL));
	
	printf ( "\nEnter the size of the array - ");
	scanf  ( "%u", &size_of_array );
	
	in_array  = (unsigned int *) malloc ( size_of_array * sizeof (unsigned int) );
	out_array = (unsigned int *) malloc ( size_of_array * sizeof (unsigned int) );
	
	// Taking Input
	printf ( "\nEnter %u numbers - ", size_of_array );
	for (i=0; i<size_of_array; i++)
	{
		//scanf ( "%u", &in_array[i] );
		in_array[i] = rand() % size_of_array + 1;
	}
	
	print_array ( in_array, size_of_array );
	
	selection_sort ( in_array, out_array, size_of_array );
	
	printf ( "\nProgram Ends\n" );	
}
