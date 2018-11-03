#include<stdio.h>
#include<stdlib.h>

int main () 
{
	char *ms,*ss;
	int size1,size2,i,j,c=0,n=0;
	
	printf ("Enter the size of the main string : ");
	scanf ("%d",&size1);
	
	ms  = (char *) malloc ((size1+1) * sizeof(char));
	
	printf ("Enter the main string : ");
	scanf ("%s",ms);
	
	printf ("Enter the size of the substring : ");
	scanf ("%d",&size2);
	
	ss  = (char *) malloc ((size2+1) * sizeof(char));
	
	printf ("Enter the main string : ");
	scanf ("%s",ss);
	
	for (i=0 ; i<size1 ; i++)
	{
		for (j=0 ; j<size2 ; j++)
		{
			if (ms[i+j] == ss[j])
				c++;
		}
		if (c == size2)
		{
			printf ("Substring occurs at %d position\n",(i+1));
			n++;
		}
		c = 0;
	}
	if (n == 0)
	printf ("No substring !");
}
