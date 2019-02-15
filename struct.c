#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct coordinate
{
	int x; // member
	int y;
}coordinate;

void main ()
{
	double distance;
	
	coordinate p1, p2;
	coordinate *p3;
	coordinate arr[50];
	
	p1.x = -1;
	p1.y =  3;
	p2.x =  5;
	p2.y =  6;
	
	p3 = (coordinate *) malloc (sizeof(coordinate));
	
	p3->x = 10;
	p3->y = 20;
	
	distance = sqrt( pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2) );
	
	printf ( "\nDistance = %f", distance );
}
