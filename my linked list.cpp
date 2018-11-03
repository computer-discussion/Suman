#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node * next;
	
}node ;

node *h = 0;

void addfirst ( int val ) {
	node * n = (node * ) malloc (sizeof(node));
	n -> data = val;
	n -> next = h;
	h = n;
}

void addlast ( int val ) {
	if (h==0)
	return addfirst (val);
	node * n = (node *) malloc (sizeof (node));
	n -> data = val;
	n -> next = 0;
	node * p = h ;
	while (p ->next != 0)
	p = p -> next;
	
	p -> next = n;
	
}

void addafter ( int before , int val ) {
	if (h == 0) return;
	node * m = h;
	while (m!=0&&m -> data != before)
	m = m -> next;
	if (m ==0) return ;
	
	node * n = (node *) malloc (sizeof (node));
	n -> data = val;
	n -> next = m -> next ;
	m -> next = n;
	
}

void addbefore ( int after , int val) {
	if (h == 0) return ;
	node * m = h,*p;
	
	while (m!=0&& m -> data ==  after )
	{
		p = m;
		m = m -> next ;
		
	}
	if (m == 0) return ;
	node * n =  (node * ) malloc ( sizeof (node));
	n -> data = val;
	n -> next = m;
	p -> next = n;
	
	}

int delFirst () {
	if (h == 0 ) 
	return ;
	
	node * n = h ;
	int val = n-> data ;
	h = h -> next;
	free (n);
	return val ;
	
}

int delLast () {
	if (h == 0) return ;
	if (h -> next == 0)
	return delFirst() ;
	
	node *p ,*n = h ;
	while (n -> next != 0) {
		p = n ;
		n = n -> next ;
	}
	p -> next = 0 ;
	int val = n -> data ;
	free (n);
	return val;
	
}

void del (int val) {
	if (h == 0)
	return ;
	if ( h -> data == val)
	delFirst () ;
	
	node *p ,*n = h ;
	while (n != 0 && n -> data != val) {
		p = n ;
		n = n -> next ;
	}
	if (n == 0) return ;
	p -> next = n -> next ;
	free (n);
}
	
int main ()
{
	int option,add,n=1,v;
	
	while (n!=0)
	{
		printf ("Enter the option : ");
		scanf ("%d ",&option);
		switch (option)
		{
			case 1 : 
			{
				printf ("You chose add!\n\n");
				printf ("Enter the value : ");
				scanf ("%d",&v);
				
				
			
				break;
			}
			default :
				break;
		}
		
	}
	 
}
