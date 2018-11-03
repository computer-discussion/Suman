/* INSTRUCTIONS :::::
	Enter the sentence using space ; ex -> I am a C Programmer.
	
	N.B. - 	1.Please enter correct words because the compiler doesn't have intelligence
			to verify a word by it's meaning.It will just calculate which word is biggest 
			and smallest.
			2.It will show both words if their word length are same.(BUG)
 */
#include<stdio.h>
#include<stdlib.h>
int strlen ( char *string)
{
	int i;
	for (i=0 ; string[i]!=NULL ; i++)
	{
	 }
	return i; 
}
int main () 
{
	char str[500];
	int size,i,j,c=0,sub = 0,max,min;
	int *arr,*arr2;
	
	printf ("Enter the sentence using space : ");
	scanf ("%[^\n]",str); //%[^\n] = It will scan the string untill it gets a new line.(including space,tab)  
	
	size = strlen (str) + 1;
	
	for (i=0 ; i<size-1 ; i++)
	{
		if (str[i] == ' ')
			c++;
	}
	if (c == 0)
	{
		printf ("%s is the biggest word !\n\n",str);
		return 0;
	}
	
	arr = (int *) malloc (c * sizeof(int));
	arr2 = (int *) malloc ((c+1) * sizeof(int));
	c = 0;
	
	//Storing the position of the spaces to an array
	
	for (i=0 ; i<size-1 ; i++)
	{
		if (str[i] == ' ')
		{
			arr[c] = i;
			c++;
		}
	}
	//calculating each word length and storing it to another array.
	
	for (i=0 ; i<c ; i++)
	{
		arr2[i] = arr[i] - sub;
		sub = arr[i] + 1;
	}	
		arr2[c] = size-2 - arr[c-1];
	
	for (i=0 ; i<c ; i++)
		printf ("arr[%d] = %d \n",(i),arr[i]);
	for (i=0 ; i<=c ; i++)
		printf ("arr2[%d] = %d \n",(i),arr2[i]);
		
	//calculating max and min among word lenghts.
	
	min=arr2[0];
	
	for(i=1;i<=c;i++)
	{
		if(min>arr2[i])
		 min = arr2[i];
	}
	printf("the smallest number in array is:::%d\n\n",min);
	
	max = arr2[0];
	
	for(i=1;i<=c;i++)
	{
		if(max<arr2[i])
		 max = arr2[i];
	}
	printf("the largest number in array is:::%d\n\n",max);
	
	//printing max word.
	sub = 0;
	
	for (i=0 ; i<c ; i++)
	{
		if ((arr[i] -sub) == max)
		{
			printf ("the largest word is : \t");
			for(j=sub ; j<arr[i] ; j++)
				printf ("%c",str[j]);
			printf ("\n\n");
		}
		sub = arr[i] + 1;
	}
	if (size-2 - arr[c-1] == max)
	{
		printf ("the largest word is : \t");
		for (j=arr[c-1]+1 ; j<=(arr[c-1]+arr2[c]) ; j++)
			printf ("%c",str[j]);
		printf ("\n\n");
	}
	
	//printing min word.
	sub = 0;
	
	for (i=0 ; i<c ; i++)
	{
		if ((arr[i] -sub) == min)
		{
			printf ("the shortest word is : \t");
			for(j=sub ; j<arr[i] ; j++)
				printf ("%c",str[j]);
			printf ("\n\n");
		}
		sub = arr[i] + 1;
	}
	if (size-2 - arr[c-1] == min)
	{
		printf ("the shortest word is : \t");
		for (j=arr[c-1]+1 ; j<=(arr[c-1]+arr2[c]) ; j++)
			printf ("%c",str[j]);
		printf ("\n\n");
	}
	
}
