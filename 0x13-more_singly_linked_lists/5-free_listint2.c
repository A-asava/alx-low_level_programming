#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *tmp;

	if (!head)
	return;

	curr = *head;
	while (curr != NULL)
{
	tmp = curr->next;
	free(curr);
	curr = tmp;
}

	*head = NULL;
}
