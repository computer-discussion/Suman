#include<stdio.h>
#include<string.h>
#define size 40

void substring (const char* str , const char* substr)
{
	int n = strlen(str) , m = strlen(substr);
	int s,j;
	
	for (s = 0 ;s <= n-m ; s++)
	{
		for (j = 0 ; j<m ; j++)
		{
			if (str[s+j] != substr[j])
			break;
		}
		if (j == m)
		printf ("Substring occurs at index %d\n", (s+1));
	}
}

int main()
{
	char s[size],sub[size];
	
	int c=0;
	
	printf ("Enter the string one : ");
	scanf ("%s",s);
	
	printf ("Enter the string two : ");
	scanf ("%s",sub);
	
	printf ("\n\n");
	
	substring (s,sub);
	
	return 0;
}
