//Date-17.09.2017
#include <stdio.h>	//Library
#define MAX	1000	//Macros


int main ()
{
	int arr[MAX];	//Static Integer Array 
	int i;
	
	for ( i=0; i<MAX; i++ )
	{
		arr[i] = i;
		//scanf ("%d\n", &arr[i]); // = i*50;	//0, 50, 100, 150, 200, 250, ...
	}
	
	for ( i=0; i<MAX; i++ )
	{
		printf ( "%d  ", arr[i]);
	}
}
