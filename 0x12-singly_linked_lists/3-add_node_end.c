#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node
 * @h: ...
 * @str: ...
 * Return: Always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *present_node;
	size_t u;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (u = 0; str[u]; u++)
		;

	new_node->len = u;
	new_node->next = NULL;
	present_node = *head;

	if (present_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (present_node->next != NULL)
			present_node = present_node->next;
		present_node->next = new_node;
	}
	return (*head);
}
