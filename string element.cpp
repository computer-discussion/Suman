#include<stdio.h>
#define size 40
int main()
{
	char s[size],r[size];
	
	int c=0;
	
	printf ("Enter the string : ");
	scanf ("%s",s);
	
	while (s[c]!='\0')
	{
		c++;
	}
	
	
	
	printf ("There are %d characters in the string ",c);
	
}
