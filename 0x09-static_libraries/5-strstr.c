#include "main.h"
#include <stdio.h>
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *t = haystack;
		char *g = needle;

		while (*t == *g && *g != '\0')
		{
			t++;
			g++;
		}

		if (*g == '\0')
			return (haystack);
	}
	return (0);
}
