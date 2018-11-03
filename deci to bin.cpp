#include<stdio.h>
#include<stdlib.h>
int main()
{
	int decimal,remainder,count=0,i,d,j;
	int *bin;
	
	printf("Enter the decimal number : ");
	scanf("%d",&decimal);
	
	d==decimal;
	
	
		while (d!=0)
		{
			remainder = d%2;
			d = d/2;
			count++;
		}
		printf ("%d",count);
		bin = (int *) malloc (sizeof(int) * count);
		
		j = count ;

	while (j!=0)
	{
		while (decimal!=0)
		{
			remainder = decimal%2;
			decimal = decimal/2;	
			bin[j] == remainder;
			j--;
		}
	}
	
	for (i=0;i<count;i--)
	printf ("%d",bin[i]);
}
