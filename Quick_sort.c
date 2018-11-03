#include<stdio.h>
#include<stdlib.h>

#define DEBUG	printf("\n\t\t%s %d\n",__func__,__LINE__) // __FILE__

void printArray(int *arr, int low, int high)
{
	int i;
	//return;
	DEBUG;
	printf ("\n---------------------------\n");
	for (i=low ; i<=high ; i++)
	{
		printf ("%d  ",arr[i]);
	}
	printf ("\n---------------------------\n");
}

void swap(int *a , int *b)
{
	DEBUG;
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition (int *a , int low , int high)
{
	int i = (low-1),j; 
	int pivot = a[high] ;
	int temp;
	
	DEBUG;
	printArray(a, low, high);
	for (j=low ; j<high ; j++)
	{
		if (a[j] <= pivot)
		{
			i++;
			swap (&a[i] , &a[j]);
			printArray(a, low, high);
		}
	}
	swap (&a[i+1],&a[high]);
	
	printArray(a, low, high);
	
	return (i+1);
}

void quick_sort (int *a,int low,int high)  //a=array , low=starting position , high=pivotal element;
{
	int q;
	DEBUG;
	printArray(a, low, high);
	
	if (low<high)
	{
		q = partition (a,low,high);
		quick_sort (a,low,(q-1));
		quick_sort (a,(q+1),high);
	}
}

void ran_num (int* a , int size)
{
	int i;
	DEBUG;
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
	
	printArray(array, 0, (size_of_array-1));
	
	printf ("\n\n");
	
	quick_sort(array,0,(size_of_array-1));
	
	printf ("The sorted array is : \n");
	
	for (i=0 ; i<size_of_array ; i++)
	{
		printf ("%d\t",array[i]);
	}
}
