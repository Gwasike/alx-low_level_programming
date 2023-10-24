#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double pointer
 * @idx: ...
 * @n: ...
 *
 * Return: ...
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *node, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		node = *head;
		for (k = 0; k < idx - 1 && node != NULL; k++)
		{
			node = node->next;
		}
		if (node == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = node->next;
	node->next = new;
	return (new);
}
