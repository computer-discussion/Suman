#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_

#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node * next;
	
}node ;

node *h = 0;

void show () {
	if (h==0) {
	printf (" list is empty!\n\n");
	return ; 
	}
	node * n;
	for (n = h ; n != 0 ; n = n -> next)
	printf ("%d\t",n ->data);
	printf ("\n\n");
}

void search (int val) {
	if (h==0) {
	printf (" list is empty!\n\n");
	return;
	}
	
	node *n = h;
	int c = 0 ;
	
	if (h ->data == val) {
	printf ("%d is available at the head node\n\n",(val));
	return ;
	}
	while (n != 0 && n ->data != val)
	{
		c++;
		n = n -> next ;
		
	}
	if (n == 0) {
	printf ("%d is not present in the  list \n\n",val);
	return ;
	}
	else
	printf ("%d is available at the %d position\n\n",val,c);
}

void addFirst (int val) {
	
	node * n = (node * ) malloc (sizeof(node));
	n -> data = val;
	n -> next = h;
	h = n;

}

void addLast (int val ) {
	if (h==0)
	return addFirst (val);
	
	node * n = (node *) malloc (sizeof (node));

	n -> data = val;
	n -> next = 0;
	node * p = h ;
	while (p ->next != 0)
	p = p -> next;
	
	p -> next = n;
	return ;
	
}

void addAfter ( int before ) {
	int val;
	if (h == 0) {
	printf ("list is empty!\n\n");
	return;
	}
	
	node * m = h;
	while (m != 0 && m -> data != before)
	m = m -> next;
	if (m ==0) {
		printf ("%d is not present in the  list !\n\n",before);
		return ;
	}
	
	node * n = (node *) malloc (sizeof (node));
	printf ("Enter the value to add : ");
	scanf ("%d",&val);
	n -> data = val;
	n -> next = m -> next ;
	m -> next = n;
	
	}

void addBefore ( int after ) {
	int val;
	if (h == 0) {
	printf ("list is empty!\n\n");
	return;
	}
	node * m = h,*p;
	
	while (m != 0 && m -> data !=  after )
	{
		p = m;
		m = m -> next ;
		
	}
	if (m == 0) {
		printf ("%d is not present in the  list !\n\n",after);
		return ;
	}
	node * n =  (node * ) malloc ( sizeof (node));
//	printf ("Enter the value to add : ");
//	scanf ("%d",&val);
	n -> data = val;
	n -> next = m;
	p -> next = n;
	
	
	
	}

int delFirst () {
	if (h == 0 ) {
	printf ("Linked list is empty !\n\n");
	return ;
	}
	
	node * n = h ;
	int val = n-> data ;
	h = h -> next;
	free (n);
	
	return val;
	
}

int delLast () {
	if (h == 0) {
		printf ("Linked list is empty ! \n\n");
		return ;
	}
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

int del (int val) {
	if (h == 0) {
		printf ("Linked list is empty ! \n\n");
		return ;
	}
	
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
					
#endif	
