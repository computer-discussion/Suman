/*.....c program to convert a hex number to decimal.....*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int string,i,j,sum=0;
	
	printf ("*******Program to convert a HexaDecimal Number to Decimal Number*******\n\n\n ");
	
	printf ("Input : A HexaDecimal Number \n\n");
	printf ("Output : The Decimal Value of it!\n\n");
	printf ("Program Starts form below----------\n\n\n\n"); 
	
	
	printf ("Enter the number of digits : ");
	scanf ("%d",&string);
	
	printf ("\n\n\n");
	
	char *hex;
	int *decimal;
	
	hex = (char *) malloc (string * sizeof(char));
	decimal = (int *) malloc (string * sizeof(int));
	
	
	printf ("Enter the hexadecimal number : ");
	scanf ("%s",hex);

	printf ("\n\n\n");
	
	if (hex[0]=='0'&&hex[1]=='x')
	{
	
		for(i=2;i<string;i++)
		{
			switch (hex[i])
			{

				case'0':
				{
					decimal[i]=0;
				}	 
			
				case'1':
				{
					decimal[i]=1;
					break;
				}
			
				case'2':
				{
					decimal[i]=2;
					break;
				}
			
				case'3':
				{
					decimal[i]=3;
					break;
				}
			
				case'4':
				{
					decimal[i]=4;
					break;
				}
			
				case'5':
				{
					decimal[i]=5;
					break;
				}
			
				case'6':
				{
					decimal[i]=6;
					break;
				}
			
				case'7':
				{
					decimal[i]=7;
					break;
				}
			
				case'8':
				{
					decimal[i]=8;
					break;
				}
			
				case'9':
				{
					decimal[i]=9;
					break;
				}
			
				case 'A' :
				case 'a' :
					{
						decimal[i]=10;
						break;
					}
				
				case 'B' :
				case 'b' :
					{
						decimal[i]=11;
						break;
					}
				
				case 'C' :
				case 'c' :
					{
						decimal[i]=12;
						break;
					}
				
				case 'D' :
				case 'd' :
					{
						decimal[i]=13;
						break;
					}
				
				case 'E' :
				case 'e' :
					{
						decimal[i]=14;
						break;
					}
				
				case 'F' :
				case 'f' :
					{
						decimal[i]=15;
						break;
					}
				default :
					{
						printf ("wrong Input!");
						break;
					}
			}
		}
	
		for(j=string-1;j>1;j--)
		{
			
			sum = sum + pow(16,string-1-j) * decimal[j];
		}
		
		printf ("The decimal value of %s is : %d\n\n\n",hex,sum);
	}
	
	
}	
