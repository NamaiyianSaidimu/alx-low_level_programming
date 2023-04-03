#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - inserts new node at the beginning
 * @head: double pointer
 * @n: the new element
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;

	newNode->next = *head;

	*head = newNode;
	return (*head);
}
