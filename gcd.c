#include<stdio.h>
#include<stdlib.h>

int  GCD (int a, int b)
{
	int lowest,i,gcd;
	
	if (a<b)
		lowest = a;
	else
		lowest = b;
		
	for (i=1 ; i<=lowest ; i++)
	{
		if(a%i==0 && b%i==0)
			gcd = i;
	}
	return gcd;
}

void main ()
{
	int size,i,check=0,gcd;
	int *a;
	
	printf ("How many numbers do you want to enter ?\nANS : ");
	scanf ("%d",&size);
	
	if (size <= 0)
		printf ("Invalid Input!\n");
	
	else if (size<2)
		printf ("Atleast enter two numbers !!\n\n");
	
	else
	{
		a = (int *) malloc (sizeof(int) * size);
	
		for (i=0 ; i<size ; i++)
		{
			printf ("Enter the %d number : ",(i+1));
			scanf ("%d",&a[i]);
		}
			
	 	for (i=0 ; i<size ; i++)
	 	{
	 		if (a[i] <= 0)
	 			check = i+1;
		}
		
		if (check != 0)
			printf ("%d element is Wrong Input!...the numbers must be greater than zero!\n\n",check);
			
		else
		{
			gcd  = a[0];
			
			for (i=0 ; i<size ; i++)
				gcd = GCD (gcd,a[i]);
			
			printf ("the gcd is %d",gcd);
		}
	}
}
