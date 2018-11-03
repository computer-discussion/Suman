#include<stdio.h>

typedef struct {
	int hms[3];
	char meridian[3];
}time ;

int main ()
{
	time local;
	
	printf ("Enter the hour : min :sec -> ");
	scanf ("%d %d %d %s",&local.hms[0],&local.hms[1],&local.hms[2],&local.meridian);
	
	if (local.hms[0]<13&&local.hms[1]<60&&local.hms[1]<60)
	{
		
		if (local.meridian=="am"||local.meridian== "AM"||local.meridian== "pm"||local.meridian== "PM")
		{
			if (local.hms[0]==12)
				local.hms[0] = 0;
			local.hms[0] = local.hms[0] +12;
			
			printf ("The train time is : %d : %d :%d ",local.hms[0],local.hms[1],local.hms[1]);
		}
		else
			printf ("Wrong meridian input!\n\n");	
	}
	else
	printf ("Wrong input \n\n");
}
