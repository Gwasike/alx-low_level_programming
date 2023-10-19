#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - function that frees
 * @head: ...
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *present_node;

	while ((present_node = head) != NULL)
	{
		head = head->next;
		free(present_node->str);
		free(present_node);
	}
}
