/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * sortLinkedList(struct node *head) {
	struct node *temp,*temp1;
	int n,min=0,k=0,t=0;
	if (head == NULL)
		return NULL;
	n = head->num;
	temp =temp1= head;
	while (temp1 != NULL)
	{
		k = 0;
		min = 0;
		n = temp1->num;
		temp = temp1 ;
		while (temp != NULL)
		{
			
			if (temp->num < n)
			{	
				n = temp->num;
				min = k;
			}
			k++;
			temp = temp->next;
		}
		k = 0;
		t = temp1->num;
		temp1->num = n;
		temp = temp1;
		while (k != min&&temp!=NULL)
		{
			temp = temp->next;
			k++;
		}
		temp->num = t;
		temp1 = temp1->next;
	}
	return head;
}