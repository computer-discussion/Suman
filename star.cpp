#include<stdio.h>

void leftsidestar (int n)
{
	int i, j ;
	for (i=0 ; i <n ; i++) 
	{
		for (j =0 ; j<n ; j++)
		{
			if (j <=i)
			printf ("%d ",(j+1));
			else
			printf (" ");
		}
		printf ("\n");
	}
}
int main()
{
	int val;
	
	printf ("Enter the number : ");
	scanf ("%d",&val);
	
	leftsidestar (val);
	
}
