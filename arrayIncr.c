#include <stdio.h>
#include <stdlib.h>

unsigned int addOne (char aDigit, unsigned int aCarry)
{
	unsigned int newCarry = 0;
	if (aCarry == 1)
	{
		/*
		switch (aDigit)
		{
			case'0':
				printf("1");
				break;
			case'1':
				printf("2");
				break;
			case'2':
				printf("3");
				break;
			case'3':
				printf("4");
				break;
			case'4':
				printf("5");
				break;
			case'5':
				printf("6");
				break;
			case'6':
				printf("7");
				break;
			case'7':
				printf("8");
				break;
			case'8':
				printf("9");
				break;
			case'9':
				printf("0");
				newCarry = 1;
				break;
			default:
				printf("\nError!\n");
				break;
		}*/
		switch (aDigit)
		{
			case'0':
			case'1':
			case'2':
			case'3':
			case'4':
			case'5':
			case'6':
			case'7':
			case'8':
				printf("%c", aDigit+1);
				break;
			case'9':
				printf("0");
				newCarry = 1;
				break;
			default:
				printf("\nError!\n");
				break;
		}
	}
	else
	{
		printf ("%c", aDigit);
	}
	
	return newCarry;
}

void incr_func( char *argArr )
{
	int length = 0;
	unsigned int carry = 0;
	
	printf ("\n");
	
	while (argArr[length] != '\0')
	{
		length++;
	}
	length--;
	
	carry = addOne(argArr[length], 1);
	length--;
	
	while (length >= 0)
	{
		carry = addOne(argArr[length], carry);
		length--;
	}
	
	if (carry == 1)
	{
		printf ("1");
	}
}

void main ()
{
	unsigned int length_of_Array; // scanf
	unsigned int index;
	char inputArr1[] = "-9999";
	char inputArr2[] = "1234567";
	
	/*
	char *arr;
	
	arr = (char*) malloc (sizeof(char) * length_of_Array);
	
	printf ("\nEnter the digits - ");
	
	for (index=0; index<length_of_Array; index++)
	{
		scanf ("%c", arr[index]);
	}
	*/
	
	incr_func (inputArr1);
	incr_func (inputArr2);
	
	printf("\nProgram Ends\n");
}
