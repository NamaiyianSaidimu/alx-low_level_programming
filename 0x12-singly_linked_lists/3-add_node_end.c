#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds new node at the end of a linked list
 * @head: first element in the list
 * @str: string for the new node
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	copy = malloc(sizeof(list_t));
	if (!copy)
		return (NULL);

	copy->str = strdup(str);
	copy->len = len;
	copy->next = NULL;

	if (*head == NULL)
	{
		*head = copy;
		return (copy);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = copy;

	return (copy);
}
