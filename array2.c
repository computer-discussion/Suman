#include<stdio.h>
#include<stdlib.h>

void insertion_sort (int*a , int size)
{
	int i,j,key;
	
	for (i=2 ; i<size ; i++)
	{
		key = a[i];
		j = i-1 ;
		
		while (j>-1 && key<a[j])
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
}


void selection_sort (int* a,int size)
{
	int i,j;
	
	for (i=0 ; i<size ; i++)
	{
		
		for (j=i+1 ; j<size ; j++)
		{
			if (a[i] > a[j])
			{
				a[i] = a[i] + a[j];
				a[j] = a[i] - a[j];
				a[i] = a[i] - a[j];	
			}
		}
	}
}

void bubble_sort (int *a,int size)
{
	int i,j;
	
	for (j=size-1 ; j>=0 ; j--)
	{
		for (i=0 ; i<=j ; i++)
		{
			if (a[i] > a[i+1])
			{
				a[i] = a[i] + a[i+1];
				a[i+1] = a[i] - a[i+1];
				a[i] = a[i] - a[i+1];
			}
		}
	}
}

void bin_search (int val,int* a,int size)
{
	int first=0 , last=size-1 , i;
	int middle = (first + last) / 2 ;
	int *arr;
	
	arr = (int *) malloc (sizeof(int) * size); 
	
	for (i=0 ; i<size ; i++)
	{
		arr[i] = a[i];
	}
	
	insertion_sort(arr,size);
	
	while (first <= last && arr[middle] != val )
	{
		if (arr[middle] < val)
		{
			first = middle + 1;  
			middle = (first + last) / 2;
		}
		
		else if (arr[middle] > val)
		{
			last = middle - 1;
			middle = (first + last) / 2;
		}
		else if (arr[middle] == val)
			printf ("%d is available in the array!!!!\n\n",val,(middle+1));		
	}
	
 	if (arr[middle] == val)
		printf ("%d is available in the array!!!\n\n",val,(middle+1));
	else
		printf ("%d is not available in the array!!!\n\n",val);
	
}

void ran_num (int* a , int size)
{
	int i;
	for (i=0 ; i<size ; i++)
	{
		a[i] = rand() % 1000;
	}
}

void main ()
{
	int *array,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) malloc (sizeof(int) * size_of_array);
	
	/*for (i=0 ; i<size_of_array ; i++)
	{
		array[i] = rand() % 100;
	}*/
	
	ran_num (array,size_of_array); 
	
	while (n != 1)
	{
		printf ("press 0 to print the array \n\n");
		printf ("press 1 to binary search an element in the array\n\n");
		printf ("press 2 to sort the array in descending order with insertion method\n\n");
		printf ("press 3 to sort the array in ascending order with selection method\n\n");
		printf ("press 4 to sort the array in ascending order with bubble method\n\n");
		printf ("press 5 to fill the array with random numbers\n\n");
		printf ("press 8 to close the program \n\n");
		printf ("Enter the option : ");
		scanf ("%d",&option);
		printf ("\n\n");
		
		switch (option)
		{
			case 0 :
				{
					printf ("The array is : \n\n");
					for (i=0 ; i<size_of_array ; i++)
						printf ("%d\t" , array[i]);
					printf ("\n\n");
					break;
				}
			case 1 :
				{
					printf ("Enter the value to search with binary method : ");
					scanf ("%d",&value);
					bin_search (value , array , size_of_array);
					break;
				}
			case 2 :
				{
					insertion_sort(array , size_of_array);
					printf ("The array is sorted into ascending order with insertion method!\n\n");
					break;
				}
			case 3 :
				{
					selection_sort(array , size_of_array);
					printf ("The array is sorted into descending order with selection method!\n\n");
					break;
				}
			case 4 :
				{
					bubble_sort(array , size_of_array);
					printf ("The array is sorted into descending order with bubble method!\n\n");
					break;
				}
			case 5 :
				{
					ran_num(array , size_of_array);
					printf ("The array is filled with random numbers!\n\n");
					break;
				}
			case 8 :
				{
				printf ("The program ends here !!!!\n\n");
				n = 1;
				break;
				}
			default :
				printf ("Wrong option!!!\n\n");
				break;
		}
	}
}
