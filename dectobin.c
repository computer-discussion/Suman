#include <stdio.h>

void funcDecToBin ( int aDecimal )
{
	int temp;
	int length = sizeof(int) * 8;
	temp = 1 << (length-1); //Because the last bit is sign bit
	printf ("\nBinary value of %d = ", aDecimal);
	
	while ( length > 0 )
	{
		/*
		if ( (temp & aDecimal) != 0 )
			printf ( "1" );
		else
			printf ( "0" );
		*/
		
		aDecimal = aDecimal << 1;
		printf ( "\n aDecimal = %d", aDecimal );
		length--;
	}
}

void main ()
{
	int decimal;
	
	printf("Enter the decimal number : ");
	scanf("%d",&decimal);
	
	printf ( "\n decimal = %d", decimal );
	funcDecToBin ( decimal );
	printf ( "\n decimal = %d", decimal );

}
