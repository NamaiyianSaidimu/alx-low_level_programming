#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * pop_listint - deletion of head node
 * @head: double pointer to the head node
 *
 * Description: The function deletes the head node
 * and returns the head node data
 *
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	return ((*head)->n);
}
