#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @h: the pointer to the first element
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
