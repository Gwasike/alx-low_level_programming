#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements
 * @h: ...
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

		while (h != NULL)
		{
			nodes++;
			h = h->next;
		}

		return (nodes);
}
