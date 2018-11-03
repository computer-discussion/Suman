//Decimal to HexaDecimal
#include<stdio.h>
#include<stdlib.h>
char DtoHD (int num) {
	
	switch(num) {
		case 0 :
			return '0';
			break;
		case 1 :
			return '1';
			break;
		case 2 :
			return '2';
			break;
		case 3 :
			return '3';
			break;
		case 4 :
			return '4';
			break;		
		case 5 :
			return '5';
			break;
		case 6 :
			return '6';
			break;
		case 7 :
			return '7';
			break;
		case 8 :
			return '8';
			break;
		case 9 :
			return '9';
			break;
		case 10 :
			return 'A';
			break;
		case 11 :
			return 'B';
			break;
		case 12 :
			return 'C';
			break;
		case 13 :
			return 'D';
			break;
		case 14 :
			return 'E';
			break;
		case 15 :
			return 'F';
			break;
		default :
			return 'G';
			break;
	}
}
int main ()
{
	int num,cnum,cpy,i=0,size = 0;
	char *Hex;
	
	printf ("Enter the Decimal number : ");
	scanf ("%d",&num);
	
	cpy = num;
	cnum = num;
	
	while (cpy!=0)
	{
		cpy = cpy/16;
		size++;
	}
	
	Hex = (char *) malloc ((size+1) * sizeof (char));
	
	Hex[size] = NULL;
	while (cnum != 0)
	{
		Hex[size-1-i] = DtoHD(cnum%16);
		if (Hex[size-1-i] == 'G')
		{
			printf ("Wrong Input!\n\n");
			return 0;
		}
		cnum = cnum/16;
		i++;
	}
	
	printf ("The hexadecimal value of %d is %s",num,Hex);
}
