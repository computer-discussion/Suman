#include<stdio.h>
#include<stdlib.h>
//#define size_of_array 10

int main ()
{
	int size_of_array,i,j,k,position,value,option,flag=0,loop=0;
	int* arr;
	
	printf ("Enter the size of the array : ");
	scanf ("%d",&size_of_array);
	
	arr = (int *) calloc (sizeof(int),size_of_array);
	
		
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
			if (arr[position-1] != 0)				//position value checking
			{
				j=position-1;
				while (arr[j] != 0 )             
					j++;
				
				for (k=j ; k!=position-1 ; k--)   //array shifting
					arr[k] = arr[k-1];
			}
			printf ("Enter the value to inset at %d position : ",position);
			scanf ("%d",&value);
			
			arr[position-1] = value;
			
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
