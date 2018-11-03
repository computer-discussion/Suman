#include<stdio.h>
int main()
{
	int row,column,i,j;
	
	printf ("********Sum of two Matrices********\n\n");
	printf ("!!!the SUM operation is only possible if row and column number of both matrices are same!!!\n\n");
	
	printf ("Input = matrix 1 and matrix 2\n\n");
	printf ("Output = matrix 1 + martix 2\n\n");
	
	printf ("Program Starts from below------\n\n");
	
	printf ("Enter the row number of both martix : ");
	scanf ("%d",&row);
	
	printf ("Enter the column number of both martix : ");
	scanf ("%d",&column);
	
	printf ("\n\n");
	
	if (row<0||column<0)
		printf ("Wrong Input!Row and column number must be greater than zero(0)!");
	
	if (row>1&&column>1)
	{
	
		int arr1[row][column],arr2[row][column],sumarr[row][column];
		
		printf ("Enter information for matrix 1 below ---\n\n");
	
		for (i=0;i<row;i++)
		{
			for (j=0;j<column;j++)
			{
				printf ("Enter the value of row- %d column- %d : ",(i+1),(j+1));
				scanf ("%d",&arr1[i][j]);
			}
		}
	
		printf ("\n\n");
	
		printf ("Enter the information for matrix 2 below ---\n\n");

		for (i=0;i<row;i++)
		{
			for (j=0;j<column;j++)
			{
				printf ("Enter the value of row- %d column- %d : ",(i+1),(j+1));
				scanf ("%d",&arr2[i][j]);
			}
		}
	
		printf ("\n\n");
	
		printf ("The sum of two matrix will be ---------\n\n\n");
		
		for(i=0;i<row;i++)
		{
			for(j=0;j<column;j++)
			{
				sumarr[i][j] = arr1[i][j] + arr2[i][j] ;
				
				printf ("%d",sumarr[i][j]);
				printf ("\t");
			}
			printf ("\n\n");
			
		}
		
		printf (".....................Program Ends Here.....................\n\n\n");
	}

}
