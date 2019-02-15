#include <stdio.h>
#include <stdlib.h>

#define ROW	10
#define	COL	10

void main ()
{
	int **arr;
	int i,j;
	
	arr = (int **) malloc (sizeof (int *) * ROW);
	
	for (i=0; i<ROW; i++)
	{
		arr[i] = (int *) malloc (sizeof (int) * COL);
	}
}
