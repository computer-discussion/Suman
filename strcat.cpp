#include<stdio.h>
int main()
{
	int a,b,i;
	static int c=0;
	
	printf ("Enter the first string size : ");
	scanf ("%d",&a);
	
	printf ("Enter the second string size : ");
	scanf ("%d",&b);
	
	int str1[a],str2[b],str3[a+b];
	
	printf ("Enter the first string  : ");
	scanf ("%s",str1);
	
	printf ("Enter the second string  : ");
	scanf ("%s",str2);
	
	for (i=0;i<a;i++)
	{
		str3[c] = str1[i];
		c++;
	}
	
	for (i=0;i<b;i++)
	{
		str3[c] = str2[i];
		c++;
	}
	printf ("%s",str3); 
}
