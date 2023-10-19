#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the number of elements
 * @h: ...
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

		while (h != NULL)
		{
			nodes++;
			h = h->next;
		}
	return (nodes);
}
