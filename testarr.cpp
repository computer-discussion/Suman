#include<stdio.h>
void swap (int a,int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
}
int main ()
{
	int arr[5] = {5,3,2,1,4},i,j,min,c=0;
	
	for (i=0 ; i<5 ; i++)
	{
		for (j=(i+1) ; j<5 ; j++)
		{
			if (arr[i]<arr[j])
			{
				swap (arr[i],arr[j]);
				j=5;
			}
		}
	}
	printf ("The sorted array is :\n\n");
	for (i=0 ; i<5 ; i++)
		printf ("%d",arr[i]);
 } 
