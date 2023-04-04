#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insertion
 * @head: pointer to the head node
 * @idx: integer representing index
 * @n: value
 *
 * Description: The function inserts a node
 * at a given position in a linked list
 *
 * Return: Address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));
	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (--idx)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}
