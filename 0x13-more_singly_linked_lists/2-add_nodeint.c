#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer to pointer to the head node of the list
 * @n: Value to be stored in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_node;

	if (head == NULL)
	return (NULL);

	my_node = malloc(sizeof(listint_t));
	if (my_node == NULL)
	return (NULL);

	my_node->n = n;
	my_node->next = *head;
	*head = my_node;

	return (my_node);
}

