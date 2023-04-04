#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - freeing a linked list
 * @head: double pointer to the first element
 *
 * Description: The function frees a listint_t list
 * and sets the head to NULL.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nextNode, *currentNode;

	currentNode = *head;

	while (currentNode)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
	*head = NULL;
}
