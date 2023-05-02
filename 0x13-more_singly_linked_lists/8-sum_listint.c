#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of all data in listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *curr_node = head;

	while (curr_node != NULL)
{
	result += curr_node->n;
	curr_node = curr_node->next;
}

	return (result);
}

