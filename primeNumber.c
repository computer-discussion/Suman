#include<stdio.h>
int main()
{
    //printf ("????? ??????? ??????? ??? ???????\n");
    int n1,n2,i,p,count=0,swap;
    printf ("Enter the two numbers : ");
    scanf ("%d\n%d",&n1,&n2);
    if( (n2 < 0) || (n1 < 0) )
    	printf ("All number must be positive!\n");
    else
    {
    	if ( n2 < n1 )
    	{
			//Swap two numbers
    		swap = n2;
    		n2   = n1;
    		n1   = swap;
		}
        if(n1>2||n2>2)
        {
          printf ("The prime numbers are : \n");
          for(i=n1;i<=n2;i++)
		  {
			count=0;
	        for(p=2;p<i;p++)
        {
            if(i%p==0)
            {
                count++;
                break;
            }
        }
          
            if (count==0)
            {
                
                printf ("%d\n",i);
            }
       
    }
            }
        if (n1==1||n2==1)
        
        {
          printf ("The prime numbers are : \n");
          for(i=n1+1;i<=n2;i++)
		  {
		  	count=0;
			for(p=2;p<i;p++)
			{
				if(i%p==0)
            {
                count++;
                break;
            }
        }
          
            if (count==0)
            {
                
                printf ("%d\n",i);
            }
       
    }
            }
        }
}
