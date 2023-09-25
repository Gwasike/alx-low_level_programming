#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int r, n, sum1 = 0, sum2 = 0;

	for (r = 0; r <= (size * size); r = r + size + 1)
		sum1 = sum1 + a[r];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
