// The simple program for Linked List

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;

}node;

//funnction for creating a linked list

node* CreatingLinkedList(int n);
void DisplayList(node* HEAD);


int main()
{
	int n = 0;
	node *HEAD = NULL;
	printf("\n How many nodes to ctreate? ");
	scanf("%d", &n);
	HEAD = CreatingLinkedList(n);
	printf("\n");
	DisplayList(HEAD);
	printf("\n");
	getchar(); getchar();
}

node* CreatingLinkedList(int n)
{
	int i = 0;
	node* HEAD = NULL;
	node* temp = NULL;
	node* p = NULL;

	for (i = 1; i <= n; i++)
	{
		// we're creating individual isolated node
		temp = (node*)malloc(sizeof(node));
		printf("\n Insert the data of Node didgit #%d\t", i);
		scanf("%d", &temp->data);
		temp->next = NULL;

		if (HEAD == NULL) // if list is currently empty, then make temp as a first node
		{
			HEAD = temp;
		}
		else
		{
			p = HEAD;
			while (p->next != NULL)
				p = p->next;
			p->next = temp;
			
		}

	}

	return HEAD;

}


void DisplayList(node* HEAD)
{
	node* p = HEAD;
	while (p != NULL)
	{
		printf("\t%d-> ", p->data);
		p = p->next;
	}

}
