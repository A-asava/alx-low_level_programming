#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a linked list listint_t
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *curr;
	listint_t *tmp;

	curr = head;
	while (curr != NULL)
{
	tmp = curr->next;
	free(curr);
	curr = tmp;
}
}

