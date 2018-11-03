#include <stdio.h>

#define MAXLOOP		10000
#define PASS		100
#define FAIL		0

int search_file (char *filePath, char *search_str)
{
	int index;
	int size_of_string = 0;
	int status = FAIL, position=0;
	
	char one_char;
	FILE *fp = fopen (filePath, "r");
	
	if (fp == NULL)
		return FAIL;
	
	while (search_str[size_of_string] != '\0')
		size_of_string++;
	
	one_char = getc(fp);
	index = 0;
	
	while (one_char != EOF)
	{
		/*for (index=0; index < size_of_string; index++)
		{
			if (search_str[index] != one_char && one_char == EOF)
				break;
			else
				one_char = getc(fp);
		}*/
		
		if (one_char == search_str[index])
		{
			index++;
			printf("\n%d-%c",index,one_char);
			if (index == size_of_string)
			{
				status = PASS;
				printf("\nString is found at %d", (position - index));
				index = 0;
			}
		}
		else
			index = 0;
		
		one_char = getc(fp);
		position++;
	}
	
	fclose(fp);
	return status;
}

int main()
{
	//int size_of_string;	// Size of the search string
	//char* search_str = NULL;
	char search_str[] = "work";
	//int size_of_string = 5;
	char filePath[] = "FileSearch.txt"; // Fixed value. Should be taken from user.
	
	//printf ("\nEnter the length of the string - ");
	//scanf  ("%d", &size_of_string);
	
	//printf ("\nEnter the string - ");
	//scanf 
	
	if (PASS == search_file (filePath, search_str))
		printf ("\nSearched-word is found!");
	else
		printf ("\nSearched-word is not found!");
		
	printf ("\nProgram Ends\n");
}
