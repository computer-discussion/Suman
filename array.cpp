#include<stdio.h>
#include<stdlib.h>

int maximum ( int *a , int size)
{
	int i,max = a[0];
	
	for(i=0 ; i<size ; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

int minimum ( int *a , int size)
{
	int i,min = a[0];
	
	for(i=0 ; i<size ; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
	
}

void reverse (int *a , int size)
{
	 int i;
	 for (i=0 ; i<((size/2)-1) ; i++)
	 {
	 	a[i] = a [size-1-i] + a[i];
	 	a[size-1-i] = a[i] - a [size-1-i];
	 	a[i] = a[i] - a [size-1-i];
	 }
}

void search (int val , int *a , int size)
{
	int n=0,i;
	for(i=0 ; i<size ; i++)
	{
		if(a[i] == val)
		{
			n = i+1;
			printf ("the number is at %d position!\n\n",n);
		}
		
	}
	if (n == 0)
		printf("%d is not present in the array!\n\n",val);
}

void asc_sort (int* a , int size)
{
	int i,j;
	for (i=0 ; i<size ; i++)
	{
		for (j=i+1 ; j<size ; j++)
		{
			if (a[i] > a[j])
			{
				a[i] = a [j] + a[i];
	 			a[j] = a[i] - a [j];
	 			a[i] = a[i] - a [j];
			}
		}
	}
}
void desc_sort (int* a , int size)
{
	int i,j;
	for (i=0 ; i<size ; i++)
	{
		for (j=i+1 ; j<size ; j++)
		{
			if (a[i] < a[j])
			{
				a[i] = a [j] + a[i];
	 			a[j] = a[i] - a [j];
	 			a[i] = a[i] - a [j];
			}
		}
	}
}

void bin_search (int val,int* a,int size)
{
	int first=0 , last=size-1;
	int middle = (first + last) / 2 ;
	
	asc_sort(a,size);
	
	while (first != last && a[middle] != val )
	{
		if (a[middle] == val)
			printf ("%d is available at %d position\n\n",val,(middle+1));
				
		else if (a[middle] < val)
		{
			first = middle + 1;  
			middle = (first + last) / 2;
		}
		
		else if (a[middle] > val)
		{
			last = middle - 1;
			middle = (first + last) / 2;
		}	
	}
	
 	if (a[middle] == val)
		printf ("%d is available at %d position\n\n",val,(middle+1));
	else
		printf ("%d is not available in the array!!!\n\n",val);
	
}

int main ()
{
	int *array,size_of_array,i,n=0,option,value;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	array = (int *) malloc (sizeof(int) * size_of_array);
	
	for (i=0 ; i<size_of_array ; i++)
	{
		printf("Enter the %d element : \n",(i+1));
		scanf ("%d",&array[i]);
	}
	
	while (n != 1)
	{
		printf ("press 0 to print the array \n\n");
		printf ("press 1 to find the maximum value \n\n");
		printf ("press 2 to find the minimum value \n\n");
		printf ("press 3 to reverse the array \n\n");
		printf ("press 4 to search an element in the array\n\n");
		printf ("press 5 to binary search an element in the array\n\n");
		printf ("press 6 to sort the array in ascending order\n\n");
		printf ("press 7 to sort the array in descending order\n\n");
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
				printf ("The maximum value is %d\n\n",maximum(array,size_of_array));
				break;
			case 2 :
				printf ("The minimum value is %d\n\n",minimum(array,size_of_array));
				break;

			case 3 :
				{
					reverse (array , size_of_array);
					printf ("The array is reversed!!!\n\n");
					break;
				}
			case 4 :
				{
					printf ("Enter the value to search : ");
					scanf ("%d",&value);
					search (value , array , size_of_array);
					break;
				}
			case 5 :
				{
					printf ("Enter the value to search with binary method : ");
					scanf ("%d",&value);
					bin_search (value , array , size_of_array);
					break;
				}
			case 6 :
				{
					asc_sort(array , size_of_array);
					printf ("The array is sorted into ascending order !\n\n");
					break;
				}
			case 7 :
				{
					desc_sort(array , size_of_array);
					printf ("The array is sorted into descending order !\n\n");
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
