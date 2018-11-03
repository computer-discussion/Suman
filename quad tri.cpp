#include<stdio.h>
#include<stdlib.h>
int main ()
{
	
	int string1,string2,i,j;
	
	printf ("Enter the string1 number : ");
	scanf ("%d",&string1);
	
	printf ("Enter the string2 number : ");
	scanf ("%d",&string2);

	char quad[string1][4],tri[string2][3];
	
	
	printf ("quad array information\n\n");
	
	for (i=0;i<string1;i++)
	{
		for (j=0;j<4;j++)
		{
			printf ("Enter the row %d col %d information : \n",(i+1),(j+1));
			scanf ("%c",&quad[i][j]);
		}
	}
	
	printf ("tri array information\n\n");
	
	for (i=0;i<string2;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("Enter the row %d col %d information : ",(i+1),(j+1));
			scanf ("%c",&tri[i][j]);
		}
	}
}
