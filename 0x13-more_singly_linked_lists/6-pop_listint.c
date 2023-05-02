#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list (listint_t)
 * @head: pointer to the first element in the linked list (listint_t)
 *
 * Return: the data inside the element that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node;
	int data;

	if (head == NULL || *head == NULL)
	return (0);

	data = (*head)->n;
	tmp_node = (*head)->next;
	free(*head);
	*head = tmp_node;

	return (data);
}

