#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* arr;
	int size,min,max,i,j;
	
	printf("\n Enter the size of array:::: \n\n");
	scanf("%d",& size);
	arr=(int*)calloc((size),sizeof (int));
	
	for(i=0;i<=size-1;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min=arr[0];
	
	for(i=1;i<size;i++)
	{
		if(min>arr[i])
		 min = arr[i];
	}
	printf("\n\n the smallest number in array is:::%d",min);
	
	max = arr[0];
	
	for(i=1;i<size;i++)
	{
		if(max<arr[i])
		 max = arr[i];
	}
	printf("\n\n the largest number in array is:::%d",max);
	
}