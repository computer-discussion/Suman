//Basic Calculstor operaions(for 2 numbers) ----- Addition|subtarction|multiplication|division|percentage
#include<stdio.h>

void plus (int a,int b,float c)
{
	c = a + b;
	printf (" The sum of %d and %d  number is : %.2f ",a,b,c);
}

void minus (int a,int b,float c)
{
	c = a - b;
	printf ("The difference between %d and %d is : %.2f",a,b,c);
}
void multiply (int a,int b,float c)
{
	c = a * b;
	printf (" The product of %d and %d is : %.2f",a,b,c);
}

void divide (int a,int b,float c)
{
	c = a / b;
	printf ("The result of %d / %d is = %.2f",a,b,c);
}
void percent (int a,int b,float c)
{
	c = (a/b) * 100;
	printf ("The percentage of %d out of %d is : %.2f",a,b,c);
}

void main()
{
	int num1,num2;
	float reslultant;
	int option;
	
	printf ("***********Basic Calculator***********\n\n");
	printf ("\tProgram Starts from below.......\n\n");
	
	printf ("Enter the first number  : ");
	scanf ("%d",&num1);
	
	printf ("\nEnter the second number : ");
	scanf ("%d",&num2);
	printf ("\n");
	
	printf ("Please choose your operation from below------\n\n");
	printf ("Press 1 to add %d and %d\n",num1,num2);
	printf ("\n");
	
	printf ("Press 2 to subtarct %d from %d\n",num2,num1);
	printf ("\n");
	
	printf ("Press 3 to find the procut of %d and %d\n",num1,num2);
	printf ("\n");
	
	printf ("Press 4 to divide %d by %d\n",num1,num2);
	printf ("\n");
	
	printf ("Press 5 to find Percentage of %d out of %d or %d out of %d\n",num1,num2,num2,num1);
	printf ("\n");
	
	printf ("Enter the option : ");
	scanf ("%d",&option);
	
	switch (option)
	
	{
		case 1 :
			plus (num1,num2,reslultant);
			break;
			
		case 2 :
			minus (num1,num2,reslultant);
			break;
		case 3 :
			multiply (num1,num2,reslultant);
			break;
		case 4 :
			divide (num1,num2,reslultant);
			break;
		case 5 :
			if (num1>0&&num2>0)
			{
				percent (num1,num2,reslultant);
			}
			else
			printf ("both numbers must be positive!",num1,num2);
			break;
		default :
			printf ("Wrong Input!Option must belong from the upper list!");
			break;
	}
	printf ("***********Program Ends Here***********");
}


