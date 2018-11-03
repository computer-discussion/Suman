//C program to insert a value in array with user defined position
#include<stdio.h>
#include<stdlib.h>
//#define size_of_array 10

int main ()
{
	int size_of_array,fillup,loop=0,flag=0,i,position,value,option;
	int* arr;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	arr = (int *) calloc (sizeof(int),size_of_array);
	
	printf ("Enter the size upto which you want to fillup the array : ");
	scanf ("%d" , &fillup);
	
	if (fillup > size_of_array-1)
		printf ("Atleast one empty space is needed! re-run the program\n\n");
	else if (fillup < 1)
		printf ("Atleast one value must be inserted!\n\n");
	else
	{
		for (i=0 ; i<fillup ; i++)
		{
			arr[i] = rand() % 100;
		}
		printf ("The array is : \n");
		for (i=0 ; i<size_of_array ; i++)
		{
			printf ("%d\t",arr[i]);
		}
		printf ("\n\n");
		while (loop != 1)
		{
			for (i=0 ; i<size_of_array ; i++)    //full checking (
			{
				if (arr[i] == 0)
					flag ++ ;
			}
			if (flag == 0)
			{
				printf ("Array is filled!");
				loop = 1;
				break;
			}     								//)
			printf ("Enter the position : ");
			scanf ("%d",&position);
			
			if (position-1 > size_of_array)
				printf ("The operation is not possible cause max size is %d \n\n",size_of_array);
			
			else
			{
				printf ("Enter the value to inset at %d position : ",position);
				scanf ("%d",&value);
				if (arr[position-1] == 0)
					arr[position-1] = value;
				else
				{
					i=position-1;
					while (arr[i] <= 0 )             
						i++;
					
					while (i > (position-1))
						arr[i] = arr[i-1];
					
					arr[i] = value;
				}
				
				
				printf ("%d is inserted at %d position\n\n",value,position);
				printf ("The array is now ----- ");
				for (i=0 ; i<size_of_array ; i++)
					printf ("%d\t",arr[i]);
				printf ("\n\n");
			}
			printf ("press 0 to close the program or press any number to run further : \n");
			scanf ("%d",&option);
			
			if(option == 0)
			{
				printf ("The program closes here !!!!\n\n");
				loop = 1;
			}
			
			flag = 0;
		}
	}
		
}
