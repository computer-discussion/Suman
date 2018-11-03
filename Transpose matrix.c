#include<stdio.h>
#include<stdlib.h>
void main()
{
	int row,col,l,m;
	int **mat,**tr;
	
	printf ("Enter the row number of the matrix : ");
	scanf ("%d",&row);
	
	printf ("Enter the column number of the matrix : ");
	scanf ("%d",&col);
	
	printf ("\n\n\n");
	
	mat = (int **) malloc (sizeof (int *) * row);
	
	for (l=0; l<row; l++)
	{
		mat[l] = (int *) malloc (sizeof (int) * col);
	}
	
	tr = (int **) malloc (sizeof (int *) * row);
	
	for (l=0; l<row; l++)
	{
		tr[l] = (int *) malloc (sizeof (int) * col);
	}
	
	
	
	//int mat[row][col],tr[row][col];
	
	for (l=0;l<row;l++)
	{
		for (m=0;m<col;m++)
		{
			printf ("Enter the row %d column %d value : ",(l+1),(m+1));
			scanf ("%d",&mat[l][m]);
		}
	}
	
	printf ("The  matrix is :\n\n");
	
	for (l=0;l<row;l++)
	{
		for (m=0;m<col;m++)
		{
			printf ("%d\t",mat[l][m]);
		}
		printf ("\n");
	}
	
	printf ("\n\n");
	
	for (l=0;l<row;l++)
	{
		for (m=0;m<col;m++)
		{
			tr[l][m] = mat[m][l];
			
		}
	}
	
	printf ("The transposed matrix is :\n\n");
	
	for (l=0;l<row;l++)
	{
		for (m=0;m<col;m++)
		{
			printf ("%d\t",tr[l][m]);
		}
		printf ("\n");
	}
	
}
