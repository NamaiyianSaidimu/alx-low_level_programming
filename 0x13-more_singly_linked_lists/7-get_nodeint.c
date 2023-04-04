#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - getting nth node
 * @head: pointer to the head node
 * @index: index in linked list
 *
 * Description: The function returns the nth
 * node of a linked list
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode = head;
	unsigned int count = 0;

	while (currentNode && count < index)
	{
		currentNode = currentNode->next;
		count++;
	}
	return (currentNode ? currentNode : NULL);
}
