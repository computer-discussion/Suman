#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,b,c = 0,i = 0,j,*arr,inc =1,carry =0;
	
	printf ("Enter the Number : ");
	scanf ("%d",&num);
	
	b = num;
	
	while (b!=0)
	{
		c++;
		b = b/10;
	
	}
	c++;
	arr = (int *) malloc (sizeof(int) * c);
	
	while (num!=0)
	{
		arr[c-1-i] = num%10;
		i++;
		num = num/10;
	}
	arr[0] = 0;
	
	
	
	for (j=c-1;j>=0;j--)
	{
		arr[j] = arr[j]+carry+inc;
		carry = arr[j]/10;
		arr[j] = arr[j]%10;
		inc = 0;
		
	}
	
	for (j=0;j<c;j++)
	printf ("%d",arr[j]);
	//printf ("%d",a);
	
	
}
