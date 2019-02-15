#include <stdio.h>

typedef int niladri;

typedef struct node
{
	unsigned int data;
	struct node *prev;
	struct node *next;
}node;

void main ()
{
	int x1=100;//HEX=00000064
	int *c;
	node x2, y;
	x2.data = 50;
	x2.next = &y;
	c = &x1;
	//*(c+1) = 50; //HEX=00003264
	
	printf ( " \n Int address=%u, Char Address=%u | Testing = %d", &x1, c, x1);
}
