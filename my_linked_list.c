#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node * next;
	
}node ;

node *h = NULL; 

void show () {
	if (h == NULL) {	
	printf ("Linked list is empty!\n\n");
	return ; 
	}
	node * n;
	for (n = h ; n != NULL ; n = n -> next)
	printf ("%d\t",n ->data);
	printf ("\n\n");
}

void search (int val) {
	//if (h==0) {
	if (h == NULL) {
	printf ("Linked list is empty!\n\n");
	return;
	}
	
	node *n = h;
	int c = 0 ;
	
	if (h->data == val) {
	printf ("%d is available at the head node\n\n",(val+1));
	return ;
	}
	while (n != NULL && n->data != val)
	{
		c++;
		n = n->next ;
	}
	if (n == NULL) {
	printf ("%d is not present in the linked list \n\n",val);
	return ;
	}
	else
	printf ("%d is available at the %d position\n\n",val,c);
}

int addFirst () {
	int val;
	
	printf ("Enter the value to add : ");
	scanf ("%d",&val);
	
	node * n = (node * ) malloc (sizeof(node));
	n->data = val;
	n->next = h;
	h = n;
	return val;
}

int addLast ( ) {
	int val;
	if (h==NULL)
	return addFirst ();
	
	node * n = (node *) malloc (sizeof (node));
	printf ("Enter the value to add : ");
	scanf ("%d",&val);
	n->data = val;
	n->next = NULL;
	node * p = h ;
	while (p->next != NULL)
	p = p->next;
	
	p->next = n;
	return val;
}

int addAfter ( int before ) {
	int val;
	if (h == NULL) {
	printf ("Linked list is empty!\n\n");
	return;
	}
	
	node * m = h;
	while (m != NULL && m->data != before)
	m = m->next;
	if (m ==NULL) {
		printf ("%d is not present in the linked list !\n\n",before);
		return ;
	}
	
	node * n = (node *) malloc (sizeof (node));
	printf ("Enter the value to add : ");
	scanf ("%d",&val);
	n->data = val;
	n->next = m->next ;
	m->next = n;
	
	return val;
	
}

int addBefore ( int after ) {
	int val;
	if (h == NULL) {
	printf ("Linked list is empty!\n\n");
	return;
	}
	node * m = h,*p;
	
	while (m != NULL && m->data !=  after )
	{
		p = m;
		m = m->next ;
		
	}
	if (m == NULL) {
		printf ("%d is not present in the linked list !\n\n",after);
		return ;
	}
	node * n =  (node * ) malloc ( sizeof (node));
	printf ("Enter the value to add : ");
	scanf ("%d",&val);
	n->data = val;
	n->next = m;
	p->next = n;
	
	return val;
	
	}

void delFirst () {
	if (h == NULL ) {
	printf ("Linked list is empty !\n\n");
	return ;
	}
	
	node * n = h ;
	int val = n->data ;
	h = h->next;
	free (n);
	printf ("%d is deleted from the linked list!\n\n",val);
	
}

void delLast () {
	if (h == NULL) {
		printf ("Linked list is empty ! \n\n");
		return ;
	}
	if (h->next == NULL)
	return delFirst() ;
	
	node *p ,*n = h ;
	while (n->next != NULL) {
		p = n ;
		n = n->next ;
	}
	p->next = NULL ;
	int val = n->data ;
	free (n);
	printf ("%d is deleted from the linked list!\n\n",val);
	
}

void del (int val) {
	if (h == NULL) {
		printf ("Linked list is empty ! \n\n");
		return ;
	}
	
	if ( h->data == val)
	delFirst () ;
	
	node *p ,*n = h ;
	while (n != NULL && n->data != val) {
		p = n ;
		n = n->next ;
	}
	if (n == NULL) {
		printf ("%d is not present in the linked list\n\n",val);
	}
	p->next = n->next ;
	free (n);
	printf ("%d is deleted from the linked list!\n\n",val);
}

void reverse () {
	if (h == NULL)
	return;
	if (h->next == NULL) 
	{
		printf ("There is one node in the linked list!\n\n");
		return;
	}
	node* curr = h;
	node* prev = NULL;
	node* befo; 
	while (curr != NULL)
	{
		befo = curr -> next;
		curr -> next = prev;
		prev = curr;
		curr = befo;
	}
	h = prev;
	printf ("The linked list is reversed !\n\n");
}
int main () {
	int option,add,n=1,v,nodedata;
	
	while (n != 0)	
	{
		printf ("!!! Welcome to Linked List !!!\n\nMENU ---\n\n");
		printf ("Type 1 to Add a value to the linked list \n" );
		printf ("Type 2 to delete a value from the linked list \n" );
		printf ("Type 3 to search a value \n");
		printf ("Type 4 to show all Linked List elements\n");
		printf ("Type 5 to reverse the linked list\n");
		printf ("Type 6 to end the program !\n\n");
		printf ("Enter the option : ");
		scanf ("%d",&option);
		
		switch (option)
		{
			case 1 : 
			{
				int add ;
				printf ("You chose add!\n\nSUBMENU--Add\n\n");
				printf ("Select the type of node addition \n");
				printf ("type 1 to add a node at the first position\n");
				printf ("type 2 to add a node at the last position\n");
				printf ("type 3 to add a node before your desired position\n");
				printf ("type 4 to add a node after your desired position\n");
				
				printf ("Enter your option : ");
				scanf ("%d",&add);
				
				switch (add)
				{
					case 1 :
						{
							printf ("You chose addfirst !\n\n");
							
							v = addFirst ();
							printf ("%d is added to the linked list!\n\n",v);
							break;
						}
					case 2 :
						{
							printf ("You chose addlast !\n\n");
							
							v = addLast ();
							printf ("%d is added to the linked list!\n\n",v);
							break;
						}
					case 3 : 
						{
							printf ("You chose add before a node!\n\n");
							printf ("Enter the node value : ");
							scanf ("%d",&nodedata);
							
							v = addBefore (nodedata) ;
							printf ("%d is added before %d in the linked list!\n\n",v,nodedata);
							break;
						}
					case 4 :
						{
							printf ("You chose add after a node!\n\n");
							printf ("Enter the node value : ");
							scanf ("%d",&nodedata);
							
							v = addAfter (nodedata) ;
							printf ("%d is added after %d in the linked list!\n\n",v,nodedata);
							break;
						}
					default : 
					{
						printf ("Wrong Input !\n\n");
						break;
					}
				}
				break;
			}
			case 2 :
			{
				int delete ;
				printf ("You chose delete!\n\nSUBMENU--Delete\n\n");
				printf ("Select the type of node deletion \n");
				printf ("type 1 to delete the first node\n");
				printf ("type 2 to delete the last node\n");
				printf ("type 3 to delete your desired node\n");
				
				printf ("Enter your option : ");
				scanf ("%d",&delete);
				
				switch (delete)
				{
					case 1 :
						{
							printf ("You chose delete first node !\n\n");
							
							delFirst ();
							
							break;
						}
					case 2 :
						{
							printf ("You chose delete last node !\n\n");
							
							delLast ();
							break;
						}
					case 3 : 
						{
							printf ("You chose delete your desired node!\n\n");
							printf ("Enter the node value : ");
							scanf ("%d",&nodedata);
							
							del (nodedata) ;
							break;
						}
					default : 
					{
						printf ("Wrong Input !");
						break;
					}
				}
				break;
			}
			case 3 :
			{
				printf ("You chose search !\n\n");
				printf ("Enter the value to search : ");
				scanf ("%d",&v);				
				search (v);
				break;
			}
			case 4 :
			{
				show ();
				break;
			}
			case 5:
				{
					reverse ();
					break;
				}
			case 6 :
				{
					n = 0;
					printf ("Program ends here---------\n\n\n");
					break;
				}
			default :
			{
				printf ("Wrong Input!\n\n");
				break;
			}
		}
	}	 
}						
