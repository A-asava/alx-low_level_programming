#include "lists.h"

/**
 *dlistint_len - prin the length of a linked list
 *@h: head of  linked list
 *
 *Return: length
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
