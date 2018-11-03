#include<stdio.h>
#define size 100
int main() 
{
	char buffer [size];
	FILE *fp = fopen ("FileOpp.txt","r");
	FILE *fp2 = fopen ("opFileOpp.txt","a");
	
	if (fp == 0) {
		printf ("File not found !\n");
		return 1;
	}
	
	if (fp2 == 0) {
		printf ("File not found !\n");
		return 1;
	}
	
	while (fgets (buffer , 99 , fp) != 0)
		fputs (buffer,fp2);
		
	fclose (fp);
	fclose (fp2);
}
