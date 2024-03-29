#include "lists.h"

/**
 * list_len - finds the length of a linked list
 * @h: First element of linked list
 *
 * Return: List length
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	return (1 + list_len(h->next));
}
