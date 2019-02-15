#include<stdio.h>
int main()
{
	int v=100, w=200;
	printf ("\nvalue of v = %d", v++); 
	// v = 101
	printf ("\nvalue of w = %d", ++w);//201
	
	printf ("\n Return = %d | %d | %d ", v == 100, v != w, w == 201 );
}
