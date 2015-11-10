/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	int z=0, o=0, t=0;
	struct node *temp;
	temp = head;
	while (temp != NULL)
	{
		(temp->data == 0) ? z++ : (temp->data == 1) ? o++ : t++;
		temp = temp->next;
	}
	temp = head;
	while (temp != NULL)
	{
		if (z!=0)
		{
			temp->data = 0;
			z--;
			
		}
		else if (o != 0)
		{
			temp->data = 1;
			o--;
		}
		else
		{
			temp->data = 2;
			t--;
		}
		temp = temp->next;
	}
	
}