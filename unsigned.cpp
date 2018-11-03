#include<stdio.h>
#include<math.h>
int main ()
{
	unsigned i,t;
	
	printf ("Enter the number : ");
	scanf ("%u",&i);
	
	t = pow (2,(sizeof(int)*8))-1;
	
	i = t+i;
	
	printf ("%u",i);
	
}
