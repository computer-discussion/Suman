#include<stdio.h>
#include<stdlib.h>

void swap(int *a , int *b)  //problem if both address are same!!!
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void heapify (int *a , int size , int i)
{
	int largest = i;
	int left = i*2 + 1;
	int right = (i+1)*2;
	
	if (left<size && a[left]>a[largest])
		largest = left;
		
	if (right<size && a[right]>a[largest])
		largest = right;
	
	if (largest != i)
	{
		swap (&a[i], &a[largest]);  //need to change
		
		heapify (a,size,largest);
	}
}
void heap_sort (int *a,int size)
{
	int i,j;
	
	for (i=(size-1)/2 ; i>=0 ; i--)
	{
		heapify (a,size,i);
	}
	
	for (i=size-1 ; i>0 ; i--)
	{
		swap (&a[0],&a[i]);
		
		heapify (a,i,0);
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
	
	heap_sort(array,size_of_array);
	
	printf ("The sorted array is : \n");
	
	for (i=0 ; i<size_of_array ; i++)
	{
		printf ("%d\t",array[i]);
	}
		
}
