#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_listint - summing linked list elements
 * @head: pointer to the head node
 *
 * Return: sum of linked list elements
 */
int sum_listint(listint_t *head)
{
	if (head == 0)
	{
		return (0);
	}
	else
	{
		return (sum_listint(head->next) + head->n);
	}
}
