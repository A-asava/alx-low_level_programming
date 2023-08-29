#include "lists.h"

/**
 *sum_dlistint - sum all  element in linked list
 *@head: pointer to first node
 *Return: addition
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
