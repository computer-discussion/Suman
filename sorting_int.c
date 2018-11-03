#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int *arr1,*arr2,*sort;
	int size1,size2,l,ssize;
	int i=0,j=0,k=0;
	    //1st array 
	printf ("Enter the size of the 1st array--");
	scanf ("%d",&size1);
	
	arr1 = (int *) calloc (sizeof(int),size1);
	
	printf ("Enter the numbers of first array below---\n");
	for (l=0 ; l<size1 ; l++)
	scanf ("%d",&arr1[i]);
	    //2nd array
	printf ("Enter the size of the 1st array--");
	scanf ("%d",&size2);
	
	arr2 = (int *) calloc (sizeof(int),size2);
	
	printf ("Enter the numbers of second array below---\n");
	for (l=0 ; l<size2 ; l++)
	scanf ("%d",&arr2[i]);
	
	ssize = size1 + size2 ;
	sort = (int *) calloc (sizeof(int),ssize);
	
	while (i<size1&&j<size2)
	{
		if (arr1[i] < arr2[j])
		{
			sort [k] = arr1[i];
			i++;
			k++;
		}
		if(arr2[j]<arr1[i])
		{
			sort [k] = arr2[j];
			j++;
			k++;
		}
		if(i==size1)
		{
			sort[k] = arr2[j];
			j++;
			k++;
		}
		if(j==size2)
		{
			sort[k] = arr1[i];
			i++;
			k++;
		}
	}
	printf ("The sorted list is---");
	for (i=0 ; i<ssize ;i++)
	{
		printf ("%d\n",sort[i]);
	}
}
