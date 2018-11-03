#include<stdio.h>
#include<string.h>
int main() 
{ 
  	char fn[20],pat[10],temp[200];
  	FILE *fp;
  	int c = 0;
  	
	printf("Enter file name with extension\n");
	scanf("%s",fn);
	
	printf("Enter pattern to be searched\n");
	scanf("%s",pat); fp=fopen(fn,"r");
	
	
	   while(!feof(fp))
	    { 
			fgets(temp,1000,fp); 
			 
			if (strstr(temp,pat))
			{
				printf ("%s is present in the %s",pat,fn);
				c++;
			}
		} 
	fclose(fp);
	if (c = 0);
		printf ("%s is not present in the %s",pat,fn);
}
