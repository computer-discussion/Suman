#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int CtoI (char c) {
	switch(c) {
		case '0' :
			return 0;
			break;
		case '1' :
			return 1;
			break;
		case '2' :
			return 2;
			break;
		case '3' :
			return 3;
			break;
		case '4' :
			return 4;
			break;		
		case '5' :
			return 5;
			break;
		case '6' :
			return 6;
			break;
		case '7' :
			return 7;
			break;
		case '8' :
			return 8;
			break;
		case '9' :
			return 9;
			break;
		default :
			return -1;
			break;
	}
}

int main ()
{
	char *string;
	int *num;
	int size,i,integer = 0;
	
	pritnf ("Enter the number in character mode : ");
	scanf ("%s",string);
	
	size = strlen(string);
	
	num = (int *) malloc (size * sizeof(int));
	
	for (i=0 ; i<size ; i++)
	{
		num[i] = CtoI(string[i]);
		if (num[i] == -1) {
			printf ("Wrong Input");
		}
	}
	
	for  (i=0 ; i<size ; i++)
	{
		integer = integer + (num [i] * pow(10,(size-1-i)));
	}
	
}
