#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c, countbit = 0;
	unsigned long int present;
	unsigned long int exclusive = n ^ m;

	for (c = 63; c >= 0; c--)
	{
		present = exclusive >> c;
		if (present & 1)
			countbit++;
	}

	return (countbit);
}
