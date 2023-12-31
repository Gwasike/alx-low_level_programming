#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the size to allocate
 *
 * Return: None
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
