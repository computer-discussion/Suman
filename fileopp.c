#include <stdio.h>

#define MAXLOOP		10000

int main()
{
	int safe = 0;
	char ch;
	FILE *fp;
	fp = fopen ("opFileOpp.txt", "a"); //filename ("a" for append)
	fprintf (fp, "\nA\nB\nC\nD");  //writing in file
	fclose(fp);
	
	fp = fopen ("FileOpp.txt", "r");
	ch = getc(fp);  //getc - to get a character from the file
	while ((ch != EOF) || (safe < MAXLOOP)) //EOF = End of File
	{
		printf ("\n%c",ch);
		ch = getc(fp);
		safe++;
	}
	fclose(fp);
}
