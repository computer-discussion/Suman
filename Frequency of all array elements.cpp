/*
Program 2:
	Write a program to count frequency of all array elements.
*/

#include <stdio.h>
#include <stdlib.h>

#define SMALL_LETTER_STARTS		65
#define SMALL_LETTER_ENDS		90
#define CAPITAL_LETTER_STARTS	97
#define CAPITAL_LETTER_ENDS		122
#define TOTAL_NUM_OF_APLH		26

void purpose ()
{
	printf ( "\nProgram Starts\n" );
	printf ( "\n*********************");
	printf ( "\n Length = One Positive Integer number ");
	printf ( "\n A character string with \"Length\" size.");
	printf ( "\n Output = Frequency of each charecter ");
	printf ( "\n  Note: only alphabets are calculated.");
	printf ( "\n*********************\n");
} 

void calculate_frequency ( char *string, int strlen, int *freq )
{
	int i=0, index;
	
	// A-Z = 65 to 90
	// a-z = 97 to 122
	
	for ( i=0; i<strlen; i++)
	{
		if ( string[i] >= SMALL_LETTER_STARTS 
			&& string[i] <= SMALL_LETTER_ENDS)
		{
			index = string[i] - SMALL_LETTER_STARTS;				
		}
		else if ( string[i] >= CAPITAL_LETTER_STARTS 
				&& string[i] <= CAPITAL_LETTER_ENDS)
		{
			index = string[i] - CAPITAL_LETTER_STARTS;
		}
		else
		{
			index = TOTAL_NUM_OF_APLH;
		}
		freq[index]++;
	}
}

void print_frequency ( int *arr )
{
	int i;
	
	printf("\n");
	for (i=0; i<TOTAL_NUM_OF_APLH; i++)
	{
		printf ( "%c or %c = %d\n", i+SMALL_LETTER_STARTS,
								    i+CAPITAL_LETTER_STARTS,
									arr[i]);
	}
	printf ( "others = %d\n", arr[TOTAL_NUM_OF_APLH]);
}

int main ()
{
	unsigned int length=0;
	char *char_string;
	int alphabets[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,
						 0,0,0,0,0,0,0,0,0,0,0,0,0,
						 0};
	int i;
	
	purpose ();
	
	printf ( "\nEnter the length of the character string(including white space) - ");
	scanf  ( "%u", &length );
	
	// Always one character extra because last
	// character will be treated as NULL.
	char_string = (char *) malloc ((length+1) * sizeof(char));
	
	if ( length > 0 )
	{
		/*
		The %c conversion specifier won't automatically skip any leading whitespace,
		so if there's a stray newline in the input stream (from a previous entry,
		for example) the scanf call will consume it immediately.
		One way around the problem is to put a blank space before the conversion
		specifier in the format string
		*/
		
		scanf ( " %c", &char_string[0] );
	}
	else
	{
		print_frequency ( alphabets );
		exit( 1 );
	}
	
	for ( i=1; i<length; i++)
	{
		scanf ( "%c", &char_string[i] );
	}
	
	calculate_frequency ( char_string, length, alphabets );
	print_frequency ( alphabets );
	
	printf ( "\nProgram Ends\n" );
	return 0;
}
