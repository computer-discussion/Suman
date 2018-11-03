//Infix to Postfix - p+(q-r)^s+t*u/v => 15 chars----
#include<stdio.h>
//#include<conio.h>
#define size  7
char a[size];
char v;
int top = -1;

/*int isEmpty ()
{
	
	return top == -1;
	
	
}
int isFull ()
{
	return top == size - 1;
	
	
}
*/
void push (char v)

{
		a [++top] = v;
		//printf ("\n\n");
	
	
}

void pop ()
{

		v = a [top--];
		printf ("%c",v);
		
}

/*void peep ()
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
	
}*/

int main ()
{
	int i;
	char b[size] = { 'a','+','b','*','c','-','d'};//'^','s','+','t','*','u','/','v'};
		
	/*	printf ("Enter the string size : ");
		scanf ("%d",&size);
		
		a = (char *) malloc (sizeof(char) * size);
		*/
		
	//	printf ("Enter the infix expression : ");
	//	scanf ("%c",&b[size]);
		
		for (i=0;i<size;i++)
		{
			if (b[i]=='+')  //for plus
			{
				if (a[top]=='+'||a[top]=='-'||a[top]=='*'||a[top]=='/'||a[top]=='^')
				{
					pop();
					    
					push (b[i]);	
				}
				else
				push (b[i]);
			}
			else if (b[i]=='-')  //for minus
			{
				if (a[top]=='-'||a[top]=='+'||a[top]=='*'||a[top]=='/'||a[top]=='^')
				{
					pop ();
					push (b[i]);	
				}
				else
				push (b[i]);
			}
			else if (b[i]=='*')    //for multiply
			{
				if (a[top]=='*'||a[top]=='/'||a[top]=='^')
				{
					pop ();
					push (b[i]);
				}
				else 
				push (b[i]);
			}
			else if (b[i]=='/')    //for division
			{
				if (a[top]=='/'||a[top]=='*'||a[top]=='^')
				{
					pop ();
					push (b[i]);
				}
				else 
				push (b[i]);
			}
			
			else if (b[i]=='^')   //for exponential
			{
				if (a[top]=='^')
				{
					pop ();
					push (b[i]);
				}
				else 
				push (b[i]);
			}
			
			else if (b[i]=='(')    //for open parenthesis
			push (b[i]);
			
			else if (b[i]==')')   //for close parenthesis
			{
				while (a[top]!='(')
				{
					pop();
				}
				pop();//top--;
				
			}
			
			else 
			printf ("%c",b[i]);
			
			
		}
		
		while (top!=-1)
		{
			pop();
		}
		
	
		printf ("\n\n");
	

	
}

