#include "lists.h"

/**
 * dlistint_len -  returns the number of elements
 * @h: head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}
	return (k);
}
