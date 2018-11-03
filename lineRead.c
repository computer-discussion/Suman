#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int main ()
{
	char *line;
	int output;
	line = (char *)calloc(sizeof(char), MAX+1);
	output = scanf (" %[^\n] %d %d", line, &output, &output);
	line[MAX] = '\0';
	printf("\n---%s|%d",line,output);
}
