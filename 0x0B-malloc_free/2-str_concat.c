#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string to concatenate
 * @s2: the second sttring to concatenate
 *
 * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int k = 0, l = 0, m = 0, n = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[k])
		k++;
	while (s2[l])
		l++;
	s = k + l;
	s = malloc((sizeof(char) * s) + 1);

	if (s == NULL)
		return (NULL);
	l = 0;

	while (m < l)
	{
		if (m <= k)
			s[m] = s1[m];
		if (m >= k)
		{
			s[m] = s2[n];
			n++;
		}
		m++;
	}
	s[m] = '\0';
	return (s);
}
