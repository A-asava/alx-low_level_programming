#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *brand_new;
	list_t *tmp;
	unsigned int len = 0;

	while (str[len])
	len++;

	brand_new = malloc(sizeof(list_t));
	if (!brand_new)
	return (NULL);

	brand_new->str = strdup(str);
	brand_new->len = len;
	brand_new->next = NULL;

	if (*head == NULL)
{
	*head = brand_new;
	return (brand_new);
}

	tmp = *head;
	while (tmp->next != NULL)
	tmp = tmp->next;
	tmp->next = brand_new;

	return (brand_new);
}
