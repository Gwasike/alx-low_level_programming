#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - function that prints all the elements
 * @h: head
 *
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *present = h;

	while (present != NULL)
	{
		printf("%d/n", h->n);
		node_count++;
		present = present->next;
	}
	return (present);
}

