#include<stdio.h>
int Fileread (char* filepath,char* string)
{
	char c;
	int i = 1;
	c = getc(filepath);
	while (c != EOF)
	{
		if (c == string[0])
		{
			c = getc();
			while ((c != EOF || c != string[i]) && string[i] != NULL)
			{
				i++;
			}
		}
		c = getc();
	}
}
int main ()
{
	char search[15];
	FILE* fp = fopen("FileOpp.txt","r");
	printf ("Enter the word :");
	scanf ("s",search);
	
	Fileread(fp,search);
}
