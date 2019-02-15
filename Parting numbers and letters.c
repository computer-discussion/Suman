#include <stdio.h>
#include <stdlib.h>

//-----------------------------------
#define SMALL_LETTER_STARTS		'a'
#define SMALL_LETTER_ENDS		'z'
#define CAPITAL_LETTER_STARTS	'A'
#define CAPITAL_LETTER_ENDS		'Z'
//-----------------------------------
#define NUMBER_START			'0' //48
#define NUMBER_ENDS				'9' //57
//-----------------------------------

void main ()
{
	char *arr;
	char *letters;
	int  *numbers;
	int letterIndex=0, numberIndex=0;
	int size, i;
	
	printf ( "\nEnter the number of characters - ");
	scanf  ( "%d", &size );
	
	arr = (char *) malloc (size * sizeof(char));
	letters = (char *) malloc (size * sizeof(char));
	numbers = (int *) malloc (size * sizeof(char));
	
	printf ("\nEnter the string - ");
	scanf  ("%s", arr);
	
	printf ( "\n" );
	for ( i=0; i<size; i++)
	{
		if ( (arr[i] >= SMALL_LETTER_STARTS && arr[i] <= SMALL_LETTER_ENDS ) ||
			 (arr[i] >= CAPITAL_LETTER_STARTS && arr[i] <= CAPITAL_LETTER_ENDS ) )
			 {
			 	printf ( "%c", arr[i] );
			 	letters[letterIndex] = arr[i];
			 	letterIndex++;
			 }
	}
	
	for ( i=0; i<size; i++)
	{
		if ( arr[i] >= NUMBER_START && arr[i] <= NUMBER_ENDS )
			 {
			 	printf ( "%c", arr[i] );
			 	numbers[numberIndex] = arr[i] - NUMBER_START;
			 	numberIndex++;
			 }
	}
}
