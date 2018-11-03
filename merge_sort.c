#include<stdio.h>
#include<stdlib.h>

void merge (int *arr , int start1 , int end1 , int start2 , int end2)
{
	int *temp,i=start1,j=start2,k=0;
	
	temp = (int *) malloc (sizeof(int) * (end2+1));
	
	while (i<=end1 && j<=end2)
	{
		if (arr[i] < arr[j])
			temp[k++] = arr[i++];
		else 
			temp[k++] = arr[j++];
	}
	while (i<=end1)
	 	temp[k++] = arr[i++]; //will be *
	 
	while (j<=end2)
		temp[k++] = arr[j++]; //will be *
		
	for (i=start1,j=0 ; i<=end2&&j<k ; i++,j++)
		arr[i] = temp[j];
	
}

void merge_sort (int *arr , int low , int high)
{
	int mid = (low + high) / 2 ;
	
	if (low < high)
	{
		merge_sort (arr,low,mid);
		merge_sort (arr,mid+1,high);
		
		merge (arr,low,mid,mid+1,high);
	}
}

void ran_num (int* a , int size)
{
	int i;
	for (i=0 ; i<size ; i++)
	{
		a[i] = rand() % ((i+1) * 100);
	}
}

void main ()
{
	int *array,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) malloc (sizeof(int) * size_of_array);
	
	
	ran_num (array,size_of_array); 
	
	printf ("The unsorted array is : \n");
	
	for (i=0 ; i<size_of_array ; i++)
	{
		printf ("%d\t",array[i]);
	}
	
	printf ("\n\n");
	
	merge_sort(array,0,(size_of_array-1));
	
	printf ("The sorted array is : \n");
	
	for (i=0 ; i<size_of_array ; i++)
	{
		printf ("%d\t",array[i]);
	}
		
}
