#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: pointer to a string
 *
 * Return: ...
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (k = 0; b[k] != '\0'; k++)
	{
		if (b[k] != '0' && b[k] != '1')
			return (0);
	}
	for (k = 0; b[k] != '\0'; k++)
	{
		num <<= 1;
		if (b[k] == '1')
			num += 1;
	}
	return (num);
}
