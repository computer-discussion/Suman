//Stack using Array----
#include<stdio.h>
#define size 5
int a[size];
int v,top = -1;

int isEmpty ()
{
	
	return top == -1;
	
	
}

int isFull ()
{
	return top == size - 1;
	
	
}

void push (int v)
{
	if (isFull())
	{
		printf ("The Stack is Overflowed!\n\n");
		
	}
	else
	{
		a [++top] = v;
		printf ("%d is pushed into the stack!",v);
		printf ("\n\n");
	}
	
}

void pop ()
{
	if (isEmpty())
	{
		printf ("The Stack is Empty!\n\n");
		
	}
	
	else
	{
		v = a [top--];
		printf ("%d is popped from the stack !",v);
		
	}
}

void peep ()
{
	if (isEmpty())
	{
		printf ("There is no value to show !\n\n");
		
	}
	
	else
	{
		v = a[top];
		printf ("The value of the top position is %d",v);
		
	}
	
}

void main ()
{
	int option,n=1,i;
	
	printf ("------------Welcome to stack------------\n\n");
	
	while(n!=0)
	{
		
		printf ("MENU\n\n");
		printf ("type 1 for push\n\nType 2 for pop\n\nType 3 for peep\n\ntype 4 to view all the Stack elements\n\nType 5 to exit this stack!\n\n\n");
	
		printf ("Enter the option : ");
		scanf ("%d",&option);
	
		printf ("\n\n");
	
		switch (option)
		{
			case 1 : 
			{
				printf ("You chose push!\n\n");
				printf ("Enter the value : ");
				scanf ("%d",&v);
				
				printf ("\n\n");
			
				push (v);
			
				break;
			}
		
			case 2 :
				{
					printf ("You chose pop!\n\n");
				
					pop ();
					
					printf ("\n\n");
				
					break;
				}
			
			case 3 :
				{
					printf ("You chose peep!\n\n");
				
					peep ();
					
					printf ("\n\n");
					
					break;
				}
			case 4 :
				{
					if (isEmpty())
					printf ("There is no value to show in the stack!\n\n");
					else
					{
						printf ("The Stack elements are-----\n\n");
						for (i=0;i<top;i++)
						printf ("%d\t",a[i]);
						
						printf ("\n\n");
					}
				}
				break;
			case 5 :
				{
					printf ("-----------The program Ends here-----------\n\n\n");
					n=0;
					break;
				}
		
			default :
				printf ("Invalid Option!\n\n");
				//sleep (10);
				break;
		}
	}
	
}

