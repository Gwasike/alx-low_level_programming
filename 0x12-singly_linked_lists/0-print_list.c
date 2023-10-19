#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - function that prints all the elements
 * @h: ...
 *
 * Return: none
 */

size_t print_list(const list_t *h)
{
	size_t index = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		index++;
		h = h->next;
	}
	return (index);
}
