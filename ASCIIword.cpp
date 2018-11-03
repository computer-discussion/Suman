#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int DectoBin (int num)
{
   int temp,r,i,bin=0,c=0;
   if (num==0)
		return 0;
		
   temp = num;
	
	while (temp != 0)
	{
		c++;
		temp = temp/2;
	}
	
	for (i=0 ; i<c ; i++)
	{
		r = num%2;
		bin = bin + r * pow(10,i);
		num = num/2;
	}

  return bin;
}

int strlen1 (char *str)
{
	int i = 0;
	for(i=0 ; str[i]!=NULL ; i++)
	{
	}
	return i;
}

int main ()
{
	char s[200];
	int i,size,*arr;
	printf ("Enter the word : ");
	scanf ("%s",s);
	
	arr = (int * ) malloc (strlen1(s) * sizeof(int));
	
	for (i=0 ; s[i]!=NULL ; i++)
	   arr[i] = s[i];
	   
	printf ( "The ASCII value of the word is : \n");
	for (i=0 ; s[i]!=NULL ; i++)
	   printf ("%d\t",arr[i]);
	   
	printf ("\n\nThe ASCII value of the word in binary is :\n");
	
	for (i=0 ; i<strlen(s) ; i++)
	{
		arr[i] = DectoBin( arr[i] );
		printf ("%d\t",arr[i]);
	}		
}
