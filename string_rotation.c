#include<stdio.h>
#include<stdlib.h>
int strlength (char *s)
{
	int i;
	for (i=0 ; s[i] != NULL ; i++);
	 
	return i;
}

int main ()
{
	int length,i,count=0;
	char s[500],c;
	
	printf ("Enter the sentence : ");
	scanf ("%[^\n]s",s);
	
	length = strlength(s);
	
	while (count <= length)
	{
		printf ("%s\n",s);
		c = s[0];
		for (i=1 ; i<length ;i++)
		{
			s[i-1] = s[i];
		}
		s[length-1] = c;
		count++;
	}
	
}
