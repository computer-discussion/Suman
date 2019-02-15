#include <stdio.h>

enum operation {
	ADD=100,
	SUB,
	DIV,
	MUL
};

void main ()
{
	int opp=1;
	int n1, n2;
	//operation opp;
	
	switch (opp)
	{
		case ADD:
			printf ( "Add = %d", n1/n2);
			break;
	}
}
