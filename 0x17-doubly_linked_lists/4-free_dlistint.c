#include "lists.h"

/**
 * free_dlistint - function that frees
 * @head: pointer to current
 *
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
