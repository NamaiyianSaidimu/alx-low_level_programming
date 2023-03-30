#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adding a node at the beginning
 * @head: first node in linked list
 * @str: string copy
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	copy = malloc(sizeof(list_t));
	if (!copy)
	{
		return (NULL);
	}
	copy->str = strdup(str);
	copy->len = len;
	copy->next = (*head);
	(*head) = copy;

	return (*head);
}
