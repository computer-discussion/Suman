#include<stdio.h>
int main()
{
	int *arr,string;
	
	printf ("Enter the number of elements : ");
	scanf ("%d",&string);
	
	arr = (int *) malloc (string * sizeof(int));
	
	for (i=0;i<string;i++)
	{
		printf ("Enter the element : ");
		scanf ("%d",&arr[i]);
	}
	
