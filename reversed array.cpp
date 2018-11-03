#include<stdio.h>
#include<stdlib.h>

void swap (int a,int b)
{
	a = a+b;
	b = a-b;
	a = a-b;
	
}

int main()
{
	int size , i , j , t , *arr;
	
	printf ("Enter the array size : ");
	scanf ("%d",&size);
	
	arr = (int *) malloc (sizeof(int) * size);
	
	for (i=0;i<size;i++)
	{
		printf ("enter the array element : ");
		scanf ("%d",&arr[i]);
	}
	
	printf ("\n\n");
	
	if (size%2==0)
	{
		for (i=0;i<(size/2);i++)
		{
			j = size-1-i;
			
			t = arr[j];
			arr[j] = arr[i];
			arr[i] = t;
		}
	}
	
	else
	{
		for (i=0;i<=(size/2);i++)
		{
			j = size-1-i;
			
			t = arr[j];
			arr[j] = arr[i];
			arr[i] = t;
		}
	}
	
	printf ("The reversed array is : \n\n");
	
	for (i=0;i<size;i++)
	{
		printf ("%d\t",arr[i]);
	}
}
