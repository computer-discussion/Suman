#include <stdio.h>
#define SIZE	128

int alphaNumaric[SIZE];

void main ()
{
	char Input[] = "mpadccpdmac";
	int isPalindrome = 0, index=0;
	
	while (Input[index] != '\0')
	{
		alphaNumaric[Input[index++]]++;
	}
	
	while (index<SIZE)
	{
		if (alphaNumaric[index++]%2)
		{
			isPalindrome++;
		}
	}
	
	if (isPalindrome < 2)
	{
		printf ("\nYes\n");
	}
	else
	{
		printf ("\nNo\n");
	}
}
