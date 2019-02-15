#include<stdio.h>
#include<stdlib.h>

int strlength (char *arr)
{
	int i;
	for (i=0 ; arr[i] != NULL ; i++);
	return i;
}

char * load ()
{
	char *arr;
	char buffer[1000];
	int size,i;
	
	printf ("Enter data : ");
	scanf ("%s",buffer);
	
	size = strlength(buffer);
	
	arr = (char *) malloc (sizeof(char) * size);
	
	for (i=0 ; buffer[i]!=NULL ; i++)
	{
		arr[i] = buffer[i];
	}
	return arr;
	
}

void ASCII (char *letter , int *ascii,int size)
{
	int i;
	for (i=0 ; i<size ; i++)
	{
		ascii[i] = letter[i];
		printf ("ASCII of '%c' is %d\n",letter[i],ascii[i]);
	}
	printf ("\n\n");
		
}

void encryption_1 (int *ascii, int *asciimod1,int size)
{
	int i;
	asciimod1[0] = ascii[0];
	
	for(i=1 ; i<size ; i++ )
	{
		asciimod1[i] = ascii[i-1] + ascii[i];
	}
	
	printf ("first encrypted value\n");
		
	for (i=0 ; i<size ; i++)
		printf ("\n%d\n",asciimod1[i]);
	printf ("\n\n");
}

void encryption_2 (int *asciimod1, int *asciimod2,int size)
{
	int i,k=0;
	for (i=0 ; i<=size/2 ; i++)
		asciimod2[i] = asciimod1[i] + (++k);

	for (i=(size/2+1) ; i<size ; i++)
		asciimod2[i] = asciimod1[i] - (--k);
	
	printf ("second encrypted value\n");
		
	for (i=0 ; i<size ; i++)
		printf ("\n%d\n",asciimod2[i]);
	printf ("\n\n");
}

int dec_to_bin(int decimal)
{
	int r,bin=0,l=1;
	
	while(decimal!=0)
	{
		r=decimal%2;
		bin=bin+(r*l);
		l=l*10;
		decimal=decimal/2;
	}
	return(bin);
	
}

void binary (int *arr1,int *arr2,int size_of_array)
{
	int i;
	for (i=0;i<size_of_array;i++)
   {
   		arr2[i]=dec_to_bin(arr1[i]);
   }
   
   for (i=0;i<size_of_array;i++)
   {
   	   
	   printf("\n  arr2[%d]= %d \n", i, arr2[i]);
	   
   }
   printf ("\n\n");
}

void encryption_3(int *arr2, int **arr3 , int size_of_array)
{
	int temp,flag=0,i,j;
	//putting the numbers in 2d array 
	for(i=0; i<size_of_array; i++)
    {
    	temp = arr2[i];
    	//calculating digit size of the each number of arr2
    	while (temp > 0)
    	{
    		flag++;
    		temp = temp/ 10;
		}
        arr3[i] = (int *) calloc (sizeof(int) , flag);
        //filling up arr3
        temp = arr2[i];
    	for (j=flag-1 ; j>=0 ; j--)
    	{
    		arr3[i][j] = temp % 10;
    		temp = temp/10;
    		
		}
		flag = 0;
    }
    //printing 2d array
   for (i=0;i<size_of_array;i++)
    {
    	temp = arr2[i];
    	//calculating digit size of the each number of arr2
    	while (temp > 0)
    	{
    		flag++;
    		temp = temp/ 10;
		}
		printf ("arr[%d] = \n",i);
		printf ("\n\n");
    	for (j=0 ; j<flag ; j++)
    		printf(" %d \t",arr3[i][j]);
    	printf ("\n\n");
    	flag = 0;
	}
	//calculating their 1's compliment
	for(i=0; i<size_of_array; i++)
    {
    	temp = arr2[i];
    	//calculating digit size of the each number of arr2
    	while (temp > 0)
    	{
    		flag++;
    		temp = temp/ 10;
		}
        //1's compliment
    	for (j=0 ; j<flag ; j++)
    	{
    		if (arr3[i][j] == 1)
    		{
    			arr3[i][j] = 0;
			}
    			
    		else if (arr3[i][j] == 0)
    		{
    			arr3[i][j] = 1;
			}
		}
		flag = 0;
    }
    //printing 1's compliment
    printf ("The 1's compliments are \n\n");
   for (i=0;i<size_of_array;i++)
    {
    	temp = arr2[i];
    	//calculating digit size of the each number of arr2
    	while (temp > 0)
    	{
    		flag++;
    		temp = temp/ 10;
		}
		printf ("arr[%d] = \n",i);
    	for (j=0 ; j<flag ; j++)
    		printf(" %d \t",arr3[i][j]);
    	printf ("\n\n");
    	flag = 0;
	}
	printf ("\n\n");
}

void encryption_4 (int *arr2,int **arr3 ,int *arr4,int size_of_array)
{
	int flag2 = 1,i,j,temp,flag=0;
	for(i=0; i<size_of_array; i++)
    {
    	temp = arr2[i];
    	//calculating digit size of the each number of arr2
    	while (temp > 0)
    	{
    		flag++;
    		temp = temp/ 10;
		}
        //1's compliment
    	for (j=flag-1 ; j>=0 ; j--)
    	{
    		arr4[i] = arr4[i] + arr3[i][j] * flag2;
    		flag2 *= 2;	
    	
		}
		flag = 0;
		flag2 = 1;
    }
    
    printf ("final array\n\n");
    
    for(i=0; i<size_of_array; i++)
    	printf ("%d\t",arr4[i]);
    printf ("\n\n");
}

void enc_to_ASCII (int *number ,int *store,char *letter,int size)
{
	int i;
	
	for (i=0 ; i<size ; i++)
	{
		store[i] = number[i] / 256;
		letter[i] = number[i] % 256 ;
	}
	printf ("\n\n");
}

int main()
{
	int n=0,option;
	
	char *character,*encryption;
	int *ascii,*enc1,*enc2,*enc3,**enc4,*enc5,*enc6,*store;
	int i;
	
	character = load ();
	
	int size = strlength(character);
	
	printf ("%s\n",character);
	
	ascii = (int *) calloc (sizeof(int) , size);
	enc1 = (int *) calloc (sizeof(int) , size);
	enc2 = (int *) calloc (sizeof(int) , size);
	enc3 = (int *) calloc (sizeof(int) , size);
	enc4 = (int **) calloc (sizeof(int*) , size);
	enc5 = (int *) calloc (sizeof(int) , size);
	enc6 = (int *) calloc (sizeof(int) , size);
	store = (int *) calloc (sizeof(int) , size);
	encryption = (char *) calloc (sizeof(char) , size);
	
	ASCII(character,ascii,size);
	
	encryption_1 (ascii,enc1,size);
	
	encryption_2 (enc1,enc2,size);
	
	binary (enc2,enc3,size);
	
	encryption_3 (enc3,enc4,size);
	
	encryption_4 (enc3,enc4,enc5,size);
	
	encryption_2 (enc5,enc6,size);
	
	enc_to_ASCII (enc6,store,encryption,size);
	
	printf ("%s is encrypted form",encryption);
}
