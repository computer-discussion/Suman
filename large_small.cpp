/* INSTRUCTIONS :::::
1 : first calculate the size of the sentence including dots
2 : Then enter the size to the program
3 : Then enter the sentence using dot ; ex -> I.am.a.C.Programmer(size = 20)
 */
#include<stdio.h>
#include<stdlib.h>
int main () 
{
	char *str;
	int size,i,j,c=0,sub = 0,max,min;
	int *arr,*arr2;
	
	printf ("Enter the size of the string : ");
	scanf ("%d",&size);
	
	str = (char *) malloc (sizeof(char) * (size+1));
	
	printf ("Enter the sentence using dot on behalf of space : ");
	scanf ("%s",str);
	
	/*if (size != strlen(str))
	{
		printf ("Size mismatch!The program is closing !\n\n");
		return 0;
	}*/
	
	for (i=0 ; i<size ; i++)
	{
		if (str[i] == '.')
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
	
	//Storing the position of the dots to an array
	
	for (i=0 ; i<size ; i++)
	{
		if (str[i] == '.')
		{
			arr[c] = i;
			c++;
		}
	}
	//calculating each word length and storing it to another array
	
	for (i=0 ; i<c ; i++)
	{
		arr2[i] = arr[i] - sub;
		sub = arr[i] + 1;
	}	
		arr2[c] = size-1 - arr[c-1];
	
	for (i=0 ; i<c ; i++)
		printf ("arr[%d] = %d \n",(i),arr[i]);
	for (i=0 ; i<=c ; i++)
		printf ("arr2[%d] = %d \n",(i),arr2[i]);
		
	//calculating max and min among word lenghts
	
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
	
	//printing max word	
	sub = 0;
	
	for (i=0 ; i<c ; i++)
	{
		if ((arr[i] -sub) == max)
		{
			printf ("the biggest word is : \t");
			for(j=sub ; j<arr[i] ; j++)
				printf ("%c",str[j]);
			printf ("\n\n");
		}
		sub = arr[i] + 1;
	}
	if (size-1 - arr[c-1] == max)
	{
		printf ("the biggest word is : \t");
		for (j=arr[c-1]+1 ; j<=(arr[c-1]+arr2[c]) ; j++)
			printf ("%c",str[j]);
		printf ("\n\n");
	}
	
	//printing min word	
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
	if (size-1 - arr[c-1] == min)
	{
		printf ("the shortest word is : \t");
		for (j=arr[c-1]+1 ; j<=(arr[c-1]+arr2[c]) ; j++)
			printf ("%c",str[j]);
		printf ("\n\n");
	}
}
