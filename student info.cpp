//C porgram to collect students' info (Name,Roll,Stream)-------------
#include<stdio.h>

typedef struct {
	
	char name [40];
	char year [8];
	char roll [10] ;
	char stream [20];
	int phone [12];
	
}student;

int main()
{
	int number,i;
	
	printf ("C Program for collecting information of students\n\nN.B.-Use Underscore('_') for space\n\n");
	
	printf ("Enter the student number : ");
	scanf ("%d",&number);
	
	printf ("\n\n");
	
	student s[number];
	
	for (i=0 ; i<number ; i++)
	{
		printf ("Student %d information : \n\n",(i+1));
		
		printf ("Enter student's name : ");
		scanf ("%s",s[i].name);
		
		printf ("Enter student's year : ");
		scanf ("%s",s[i].year);
		
		printf ("Enter the student's roll number : ");
		scanf ("%s",s[i].roll);
		
		printf ("Enter the student's stream : ");
		scanf ("%s",s[i].stream);
		
		printf ("Enter the student's phone no. : ");
		scanf ("%s",s[i].phone);
		
		printf ("\n\n");
	}	
	
	for(i=0 ; i<number ; i++)
	{
		printf ("STUDENT %d\n\n",(i+1));
		
		printf ("Name : %s\n",s[i].name);
		printf ("Year : %s\n",s[i].year);
		printf ("Roll : %s\n",s[i].roll);
		printf ("Stream : %s\n",s[i].stream);
		printf ("Phone no. : %s\n",s[i].phone);
		printf ("\n\n");
		
	}
}
