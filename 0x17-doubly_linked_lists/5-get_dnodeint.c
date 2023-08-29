#include "lists.h"

/**
 *get_dnodeint_at_index - return a node at a givn place
 *@head: A pointer to the first node
 *@index: place
 *Return: position of the node in list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			break;
		head = head->next;
		count++;
	}
	return (head);
}
