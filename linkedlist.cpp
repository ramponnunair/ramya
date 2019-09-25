// linkedlist.cpp : Defines the entry point for the console application.
//
#include"stdafx.h"
#include<iostream>
using namespace std;

static int l1, l2;
struct node
{
	int data;
	struct node*next;
};

void insert(struct node**head, int newdata)
{
	struct node*newnode = (struct node*)malloc(sizeof(struct node*));
	struct node*last = *head;
	newnode->data = newdata;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = newnode;
	}
}
void len(struct node* head1, struct node* head2)
{
	while (head1 != NULL)
	{
		l1++;
		head1 = head1->next;
	}
	while (head2 != NULL)
	{
		l2++;
		head2 = head2->next;
	}
}
struct node* traverse(struct node*head, int t)
{
	while (t--)
	{
		head = head->next;
	}
	return head;
}
struct node* merge(struct node* head1, struct node* head2)
{
	struct node*temp = head1;
	while (temp->next = NULL)
	{
		temp = temp->next;
	}
	temp->next = head2->next;
	cout << "address of the pointer at the merging point" << temp;
	cout << "\nmerging point" << head2->data;
	return head1;
}

void display(struct node* head)
{
	struct node* temp = head;
	while (temp != NULL)
	{
		cout << temp->data;
		temp = temp->next;
	}
}
int main()
{
	struct node* head1 = NULL;
	struct node* head2 = NULL;
	struct node* temp = NULL;
	int dif = 0;
	insert(&head1, 1);
	insert(&head1, 2);
	insert(&head1, 3);
	insert(&head1, 4);
	insert(&head1, 5);
	insert(&head2, 5);
	insert(&head2, 6);
	insert(&head2, 7);
	display(head1);
	cout << "\n";
	display(head2);
	cout << "\n";
	len(head1, head2);
	dif = abs(l1 - l2);
	temp = traverse(head1, dif);
	merge(temp, head2);
	cout << "merged list:";
	display(head1);
	cout << "\n";
	getchar();
    return 0;
}

