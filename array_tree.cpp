#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int *array ,size , *a,i,j,k=1,is,os;
	
	printf ("Enter the size of the array : ");
	scanf ("%d" , &size);
	
	if (size%2==0)
		printf ("The size must be odd !");
	else
	{
		array = (int *) malloc (sizeof(int) * size );
		a = (int *) malloc (sizeof(int) * size );
		
		for (i=0 ; i<size ; i++)
		{
			printf ("Enter the %d element : ",(i+1));
			scanf ("%d",&array[i]);
		}
		
		a[0] = array[size/2];
		
		for (i=(size/2-1),j=(size/2+1) ; k<size ; i--,j++)
		{
			a[k] = array[i];
			k++;
			a[k] = array[j];
			k++;
		}
		
		/*for (i=0 ; i<size ; i++)
		{
			printf ("%d\t",a[i]);
		}*/
		printf ("\n");
		k = 0;
		os = size/2;
		
		for (i=0 ; i<os ; i++)
			printf (" ");
		printf ("%d",a[k]);
		k++;
		for (i=0 ; i<os ; i++)
			printf (" ");
		printf ("\n");
			
		for (os=(size/2-1),is=1 ; k<size ; os--,is=is+2)
		{
			for (i=0 ; i<os ; i++)
				printf (" ");
			printf ("%d",a[k]);
			k++;
			for (i=0 ; i<is ; i++)
				printf (" ");
			printf ("%d",a[k]);
			k++;
			for (i=0 ; i<os ; i++)
				printf (" ");
			printf ("\n");
		}
	}
}
