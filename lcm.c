#include<stdio.h>
#include<stdlib.h>

int  LCM (int a, int b)
{
	int lowest,highest,i,lcm;
	
	if (a<b)
	{
		lowest = a;
		highest = b;
	}
	else
	{
		lowest = b;
		highest = a;
	}
		
	for (i=1 ; i<=lowest ; i++)
	{
		a = highest * i;
		if(a%lowest == 0)
		{
			lcm = a;
			break;
		}
			
	}
	return lcm;
}

void main ()
{
	int size,i,check=0,lcm;
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
			lcm  = a[0];
			
			for (i=0 ; i<size ; i++)
				lcm = LCM (lcm,a[i]);
			
			printf ("the LCM is %d",lcm);
		}
	}
}
