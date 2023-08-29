#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts node at certain position
 *@h: pointer to first node
 *@idx: place to insert node
 *@n: node to be inserted
 *Return: address of newnode
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;

	temp = *h;
	while (temp)
	{
		if (count == idx - 1)
		{
			newnode->next = temp->next;
			newnode->prev = temp;
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));
			temp->next->prev = newnode;
			temp->next = newnode;
			return (newnode);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
