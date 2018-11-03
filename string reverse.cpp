#include<stdio.h>
#include<string.h>
#define size 40

int reverse (char* str)
{
	int n = strlen(str);
	int i,j;
	
	for (i=0,j=n-1 ; i<j ; i++,j--)
	{
		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}
int main()
{
	char s[size];
	
	printf ("Enter the string : ");
	scanf ("%s",s);
	
	reverse (s);
	
	printf ("The reversed string is %s",s);
	
}
