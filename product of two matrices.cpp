//C program to find the product of two matrices

#include<stdio.h>
int main()
{
	int i,j,k,row,mid,col;
	
	printf ("**********Matrix Multiplication**********\n\n\n");
	
	printf ("Input = Two matrices respectively\n\n");
	printf ("Output = Their product\n\n");
	
	printf ("N.B. - Matrix multiplication is only possible if column number of the 1st matrix and row number of the second matrix are same!\n\n");
	
	
	printf ("Program starts from below---------\n\n");
	
	printf ("Enter the row number of first matrix : ");
	scanf ("%d",&i);
	
	printf ("Enter the column number of first matrix/row number of second matrix : ");
	scanf ("%d",&j);
	
	printf ("Enter the column number of second matrix : ");
	scanf ("%d",&k);
	
	printf ("\n\n");
	
	int a[i][j],b[j][k],c[i][k];
	
	printf ("First matrix infomation-----\n\n");
	
	for (row=0;row<i;row++)
	{
		for(mid=0;mid<j;mid++)
		{
			printf ("Enter the element of row %d column %d : ",(row+1),(mid+1));
			scanf ("%d",&a[row][mid]);
		}
		
	}
	
	printf ("\n\n");
	
	printf ("Second matrix information-----\n\n");
	
	for(mid=0;mid<j;mid++)
	{
		for (col=0;col<k;col++)
		{
			printf ("Enter the element of row %d column %d : ",(mid+1),(col+1));
			scanf ("%d",&b[mid][col]);
		}
		
	}
	
	printf ("\n\n");
	
	for(row=0;row<i;row++)
	{
		for (col=0;col<k;col++)
		{
			c[row][col] = 0;
		}
		
	}
	
	for(row=0;row<i;row++)
	{
		for(col=0;col<k;col++)
		{
			for (mid=0;mid<j;mid++)
			{
				c[row][col] = c[row][col] + (a[row][mid] * b[mid][col]);
				
			}
		}
	}
	
	printf ("The product of the two matrices is \t ------\n\n\n");
	
	for(row=0;row<i;row++)
	{
		for (col=0;col<k;col++)
		{
			printf ("%d",c[row][col]);
			printf ("\t");
		}
		printf ("\n");	
	}
	
	printf ("\n\n---------Program Ends here---------\n\n");
}
