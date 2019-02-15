#include <stdio.h>

void main ()
{
	int numRow = 10, id1, id2;
	int lastNum = 0;
	
	// Algorithm
	for (id1=1; id1<=numRow; id1++)
	{
		printf ("\n");
		lastNum += id1; // lastNum = id1 + lastNum
		
		if (id1%2 != 0) // Odd row
		{
			for (id2=lastNum-id1+1; id2<lastNum+1; id2++)
			{
				printf ( "%3d", id2 );
			}
		}
		else	// even row
		{
			for (id2=lastNum; id2>lastNum-id1; id2--)
			{
				printf ( "%3d", id2 );
			}
		}
	}
}
