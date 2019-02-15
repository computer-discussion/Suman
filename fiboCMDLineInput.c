#include<stdio.h>

int fibonacci ( int term )
{
	
	//printf ( "\n\t\t\tFunction=%s Line = %d | term = %d", __func__, __LINE__, term );
	
	if ( term == 0 )
		return 0;
	else if (term == 1 )
		return 1;
	else
		return (fibonacci(term-1) + fibonacci(term-2));
}


void main (int argc, char* argv[])
{
	int num;
	
	
	for (num=0; num<5; num++)
	{
		printf ( "\n  %d  \n", fibonacci(num) );
	}
}
