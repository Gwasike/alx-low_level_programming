#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a new node at the beginning
 * @head: ...
 * @n: ...
 *
 * Return: ...
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *node;
	
	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
