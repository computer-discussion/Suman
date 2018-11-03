#include<stdio.h>

int factorial (int val) {
	int fact = 1 ;
	while (val != 0)
	{
		fact = fact * val ;
		val--;
	}
	return fact;
}
int main()
{
	int t,n,kr=0,temp;
	printf ("Enter the number : ");
	scanf ("%d",&n);
	
	t = n;
	
	while (t!=0)
	{
		temp = t%10;
		t = t/10;
		kr = kr + factorial (temp) ;
	}
	
	if (kr == n)
	printf ("%d is a Krishnamurty number",n);
	
	else
	printf ("%d is not a Krishnamurty number",n);
}
