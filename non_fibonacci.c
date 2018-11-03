#include<stdio.h>

void non_fibonacci (int range)	// int a_<name> ==> int a_range
{
	int first_fib=3,second_fib=5,temp,i=0;		// first_fib, second_fib
	if (range<0)
	{
		printf ("Invalid\n\n");
	}
	else if (range<4)
	{
		printf ("There are no non_fibonacci numbers upto %d\n\n",range);
	}
	else
	{
		printf ("The non-fibonacci numbers upto %d are/is : \n\n",range);
		while (i <= range)	
		{
			i = first_fib+1;
			while (i < second_fib && i <= range)
			{
				printf ("%d\t",i);
				i++;
			}
			temp = first_fib ;
			first_fib = second_fib ;
			second_fib = temp + second_fib ;		
		}
	}
}
void main ()
{
	int range ;
	
	printf ("Enter the range to print non_fibonacci numbers upto : ");
	scanf ("%d",&range);
	
	non_fibonacci (range);
}
