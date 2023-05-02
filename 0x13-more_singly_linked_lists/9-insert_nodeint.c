#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node in a linked list,(listint_t)
 * at given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data inserted in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr_node = *head;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (curr_node && idx > 1)
	{
		curr_node = curr_node->next;
		idx--;
	}

	if (!curr_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = curr_node->next;
	curr_node->next = new_node;

	return (new_node);
}

