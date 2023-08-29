#include "lists.h"

/**
 *free_dlistint - free the linked list
 *@head: A pointer to the first node in list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
