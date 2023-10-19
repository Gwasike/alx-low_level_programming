#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the beginning
 * @head: ...
 * @str: ...
 *
 * Return: Always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int length = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[length])
		length++;

	node->len = length;
	node->str = strdup(str);
	node->next = *head;
	*head = node;
	return (node);
}
