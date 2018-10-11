#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include <malloc.h>


int addNode(int value);
void newList();
void prettyPrint();

struct node* head;

void prettyPrint()
{
	struct node *cursor = head;
	
	printf ("list: ");
	while ( cursor != NULL)
	{
		printf("-> %d \t", cursor->item);
		cursor = cursor->next;
	} printf("\n");
}

void newList()
{
	head = NULL;
}

int addNode(int value)
{
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	if (temp == NULL){exit(1);}
	temp->next=head;
	temp->item= value;
	head=temp;
return 0;
}
