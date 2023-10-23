#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_listint - function that prints all the elements
 * @h: head
 *
 * Return: Always 0
 */
size_t print_listint(const listint_t *h)
{
	size_t present = 0;

	while (h)
	{
		printf("%d/n", h->n);
		present++;
		h = h->next;
	}
	return (present);
}

