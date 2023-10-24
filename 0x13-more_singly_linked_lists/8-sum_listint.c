#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: the first node
 *
 * Return: all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
