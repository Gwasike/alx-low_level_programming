#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members
 * @size: size
 *
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int g = 0, i = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = nmemb * size;
	s = malloc(i);

	if (s == NULL)
		return (NULL);

	while (g < i)
	{
		s[g] = 0;
		g++;
	}

	return (s);
}
