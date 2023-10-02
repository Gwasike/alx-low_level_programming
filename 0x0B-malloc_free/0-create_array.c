#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: The address of array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsigned int k;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
	{
		s[k] = c;
	}
	return (s);
}
