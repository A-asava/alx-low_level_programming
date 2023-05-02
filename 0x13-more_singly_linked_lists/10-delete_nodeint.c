#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node in linked list (listint_t)
 * at given index
 * @head: pointer to first element in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *curr;

	if (head == NULL || *head == NULL)
	return (-1);

	prev = NULL;
	curr = *head;

	for (i = 0; i < index && curr; i++)
{
	prev = curr;
	curr = curr->next;
}

	if (curr == NULL)
	return (-1);

	if (prev == NULL)
	*head = curr->next;
	else
	prev->next = curr->next;

	free(curr);
	return (1);
}

