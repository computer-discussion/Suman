#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int size,i,temp,j;
	char *arr;
	
	printf ("Enter the string length : ");
	scanf ("%d",&size);
	
	arr = (char *) malloc (size  * sizeof(char));
	printf ("Enter the string : ");
	scanf ("%s",arr);
	
	for (i=0;i<strlen(arr)/2;i++)
	{
		j = strlen(arr)-i-1;
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
	
	printf ("The reversed string is %s",arr);
}
