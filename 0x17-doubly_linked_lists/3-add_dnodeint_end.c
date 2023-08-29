#include "lists.h"

/**
 *add_dnodeint_end - adds node at the end of linked list
 *@head: A pointer to  first node in list
 *@n: node to inserted
 *Return: new node 
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *tail = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
		newnode->prev = tail;
		tail = newnode;
	}
	return (newnode);
}
