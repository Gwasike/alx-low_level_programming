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
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

