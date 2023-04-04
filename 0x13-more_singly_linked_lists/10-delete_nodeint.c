#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * delete_nodeint_at_index - node deletion
 * @head: pointer to head node
 * @index: linked list index
 *
 * Return: index of the node to be deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *previous;

	if (index == 0)
	{
		*head = (*head)->next;
		return (temp);
		free(temp);
	}
	while (--index)
	{
		previous = temp;
		temp = temp->next;
	}
	previous->next = temp->next;
	return (temp);
	free(temp);
}
