#include<stdio.h>
#define size 100
int main() 
{
	char buffer [size];
	FILE *fp = fopen ("FileOpp.txt","r");
	
	if (fp == 0) {
		printf ("File not found !\n");
		return 1;
	}
	
	//reading a file
	
	while (fgets (buffer , 99 , fp) != 0) //{fgets (where we storing , size of the characters , the main file name )
		printf ("%s",buffer);
	
	//fclose (fp);
	
	//writing a file 
	
//	FILE *fp = fopen ("FileOpp.txt","r");
	FILE *fp2 = fopen ("opFileOpp.txt","a");
	
	if (fp == 0) {
		printf ("File not found !\n");
		return 1;
	}
	
	while (fgets (buffer , 99 , fp) != 0)
		fputs (buffer,fp2);
		
	fclose (fp);
	fclose (fp2);
}
