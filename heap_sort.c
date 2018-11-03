#include<stdio.h>
#include<stdlib.h>

void swap(int *a , int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void heap_sort (int *a,int size)
{
	int i,j,root,child;
	
	for (i=size-1 ; i>0 ; i--)
	{
		for (j=i ; j>=1 ; j--)
		{
			child = j;
			root = 1;
			while (root!=0)
			{
				root = (child-1)/2;
				printf ("child = %d   root = %d  a[child] = %d  a[root] = %d\n",child,root,a[child],a[root]);
				if (a[child] > a[root])
					swap (&a[child],&a[root]);
				child = root;
			}
			printf ("\n\n");
		}
		swap (&a[0],&a[i]);
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
	int size_of_array=6,i,n=0,option,value;
	int array[] = {1,2,3,4,5,6};
	
/*	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) malloc (sizeof(int) * size_of_array);
	
	
	ran_num (array,size_of_array); */
	
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
