#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void NegNum (int num) //using bitwise operator
{ 
	int size, bit;
	int msb = 0;
	
	/*
	while ( num != 0 )
	{
		Print LSB of num variable.
		Right shift num variable by 1 bit.
	}
	*/
	
	printf ("\nBinary Value of %d : ", num);
	size = sizeof(int) * 8;
	while (size > 0)
	{
	    bit = num >> (size-1);
		
		if ((bit & 0x1))  //And operator
		{
			printf ("1");
			msb = 1;
		}
		else if (!(bit & 0x1) && (msb != 0))
		{
			printf ("0");
		}

		size--;
	}
	printf ("\n");
}

int DectoBin (int num) //using normal formulae
{
    int temp,r,i,bin=0,c=0;
	unsigned t;
    if (num==0)
		return 0;
		
    temp = num;
	
	while (temp != 0)
	{
		c++;
		temp = temp/2;
	}
	
	for (i=0 ; i<c ; i++)
	{
		r = num%2;
		bin = bin + r * pow(10,i);
		num = num/2;
	}

  return bin;
}

int main ()
{
	int num,bin;
	
	printf ("Enter the Decimal number : ");
	scanf ("%d",&num);
	if (num<0)
	{
		NegNum (num);
	}
	else
	{
		NegNum (num);
		printf ("\n\n");
		bin = DectoBin(num);
		printf ( "The Binary value of %d is %d",num,bin);
	}
}
