//C program to find the inverse of a 2*2 or 3*3 matrix

#include<stdio.h>
int main()
{
	int order,row,column,det;
	
	printf ("*******C program to find the inverse of a 2*2 or 3*3 matrix*******\n\n\n");
	
	printf ("Input = a 2*2 or 3*3 matrix\n");
	printf ("Output = It's inverse\n\n\n");
	
	printf ("Enter the order of the matrix : ");
	scanf ("%d",&order);
	
	printf ("\n\n\n");
	
	switch (order)
	{
		case 2 :
		{
			int	a[2][2];
			double b[2][2];
			
			for (row=0;row<2;row++)
			{
				for (column=0;column<2;column++)
				{
					printf ("Enter the element of row %d column %d\t: ",(row+1),(column+1));
					scanf ("%d",&a[row][column]);
				}
			}
			
			printf ("\n\n\n");
			
			det = a[0][0]*a[1][1] - a[1][0]*a[0][1];
			
			if (det==0)
			printf ("Numeric Value of Determinant of the matrix must be greater or less than zero(0)!\n");
			
			else
			{
				b[0][0] = a[1][1]/det;
				b[0][1] = -a[0][1]/det;
				b[1][0] = -a[1][0]/det;
				b[1][1] = a[0][0]/det;
			}
			
			printf ("The inverse matrix is : \n\n");
			
			for (row=0;row<2;row++)
			{
				for (column=0;column<2;column++)
				{
					printf ("%d",b[row][column]);
					printf ("\t");
				}
				printf ("\n");
			}
			
			break;
			
		}
		case 3 : 
		{
			int a[3][3];
			double b[3][3];
	
	
			for (row=0;row<3;row++)
			{
				for (column=0;column<3;column++)
				{
					printf ("Enter the element of row %d column %d\t: ",(row+1),(column+1));
					scanf ("%d",&a[row][column]);
				}
			}
			
			printf ("\n\n\n");
			
			det = a[0][0]*((a[1][1]*a[2][2])-(a[2][1]*a[1][2])) + a[0][1]*((a[2][0]*a[1][2])-(a[1][0]*a[2][2])) + a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
			
			
			if (det==0)
			printf ("Numeric Value of Determinant of the matrix must be greater or less than zero(0)!\n");
			
			
			
			else
			{
				b[0][0] = ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2]))/det;
				b[0][1] = ((a[2][1]*a[0][2]) - (a[0][1]*a[2][2]))/det;
				b[0][2] = ((a[0][1]*a[1][2]) - (a[1][1]*a[0][2]))/det;
				b[1][0] = ((a[2][0]*a[1][2]) - (a[1][0]*a[2][2]))/det;
				b[1][1] = ((a[0][0]*a[2][2]) - (a[2][0]*a[0][2]))/det;
				b[1][2] = ((a[1][0]*a[0][2]) - (a[0][0]*a[1][2]))/det;
				b[2][0] = ((a[1][0]*a[2][1]) - (a[2][0]*a[1][1]))/det;
				b[2][1] = ((a[2][0]*a[0][1]) - (a[0][0]*a[2][1]))/det;
				b[2][2] = ((a[0][0]*a[1][1]) - (a[1][0]*a[0][1]))/det;
			}
			
			
			printf ("The inverse matrix is : \n\n");
			
			for (row=0;row<3;row++)
			{
				for (column=0;column<3;column++)
				{
					printf ("%f",b[row][column]);
					printf ("\t");
				}
				printf ("\n");
			}
			
			break;
		}
		
		default :
			printf ("Not working for %d input!",order);
			break;
	}
	
	printf ("\n\n\n");
	
	printf ("----------------The Program Ends Here----------------");
	
	
}
