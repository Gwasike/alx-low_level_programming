#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate of the string
 * @str:  duplicated string
 *
 * Return: string which is a duplicate
 */
char *_strdup(char *str)
{
	int g = 0, k = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[k])
	{
		k++;
	}

	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);

	while (g < k)
	{
		s[g] = str[g];
		g++;
	}

	s[g] = '\0';
	return (s);
}
