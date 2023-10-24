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
	

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[length])
		length++;

	node->n = n;
	node->next = *head;

	*head = node;
	return (node);
}
