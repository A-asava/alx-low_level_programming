#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns node at a certain index in a linked list
 * @head: first node in the linked list (listint_t)
 * @index: index of the node to be returned
 *
 * Return: pointer to the node being searched for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp_node = head;

	while (tmp_node != NULL)
{
	if (count == index)
	return (tmp_node);
	count++;
	tmp_node = tmp_node->next;
}

	return (NULL);
}

