#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *a1,*a2;
	int size1,size2,i,j;
	
	printf ("Enter the string size : ");
	scanf ("%d",&size1);
	
	a1 = (char * ) malloc ( sizeof(char) * size1);
	
	printf ("Enter the first string below :\n\n");
	
	scanf ("%s",&a1[size1]);
	
	printf ("Enter the string size : ");
	scanf ("%d",&size2);
	
	a2 = (char * ) malloc ( sizeof(char) * size2);
	
	printf ("Enter the second string below :\n\n");
	
	scanf ("%s",&a2[size2]);
	
	for (i=0;i<size1;i++)
	{
		if (a1[i]==' ')
		{
			for(j=0;j<size2;j++)
			{
				switch(a2[j])
				{
					case ' ' :
						{
							
							break;
						}
					default :
						{
							printf ("%c",a2[j]);
							break;	
						}
					
				}
			}
		}
		else 
		{
			printf ("%c",a1[i]);
		}
	}
	
}
