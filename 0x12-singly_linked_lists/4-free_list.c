#include "lists.h"
#include <stdlib.h>

/**
 * free_list - freeing a list_t list
 * @head: First element of list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
