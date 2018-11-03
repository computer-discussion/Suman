#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void name (char** namebox, int i)
{
	char buffer[100];
	int size;
	
	printf ("Enter the name : ");
	scanf ("%s",buffer);
	
	size = strlen(buffer);
	
	namebox[i]  =  (char *) malloc (sizeof(char) * size);
	
	strcpy (namebox[i], buffer);
	printf ("\n%s | %s", buffer, namebox[i]);	
}

void name1 (char** namebox)
{
	char buffer[100];
	int size;
	
	printf ("%sEnter the name : ", __func__);
	scanf ("%s",buffer);
	
	size = strlen(buffer);
	
	*namebox  =  (char *) malloc (sizeof(char) * size);
	
	strcpy (*namebox, buffer);
	printf ("\n%s - %s | %s", __func__, buffer, *namebox);	
}


void main ()
{
	char **namebox1;
	char **namebox;
	int size,i;
	
	printf ("How many names? \n");
	scanf ("%d",&size);
	
	namebox1 = (char **) malloc (sizeof(char *) * size);
	namebox  = (char **) malloc (sizeof(char *) * size);
	
	for (i=0 ; i<size ; i++)
	{
		name1 (&namebox1[i]);
		name  (namebox, i);
	}
	
	for (i=0 ; i<size ; i++)
	{
		printf ("name %d = %s\t",(i+1),namebox[i]);
		printf ("name1 %d = %s\t",(i+1),namebox1[i]);
	}
}
