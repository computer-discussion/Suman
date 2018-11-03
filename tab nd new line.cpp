#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *arr;
	int i,string;
	printf ("enter the number of letters : ");
	scanf("%d",&string);
	
	arr = (char *) malloc (string * sizeof(char));
	
	for(i=0;i<=string;i++)
	{
		
	printf ("Enter the input : ");
	scanf("%c",arr[i]);
	
	
	}
	
	printf ("The modified string is : \n\n\n");
	
	for(i=0;i<=string;i++)
	{
		if(arr[i]=='\\'&&arr[i+1]=='t') //arr[i] == '\\' && arr[i+1] == 't'
		{
			printf("\t");
			i++;		// i++
		}
		
		else if(arr[i]=='\\'&&arr[i+1]=='n')
		{
			printf("\n");
			i++ ;
		}
		else
		printf ("%d",arr[i]);
	
	}

}
