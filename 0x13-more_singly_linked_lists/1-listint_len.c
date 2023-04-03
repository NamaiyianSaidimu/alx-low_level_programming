#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - length of a linked list
 * @h: node pointer
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + listint_len(h->next));
}
