#include "function_pointers.h"

/**
 * int_index - function that searches
 * @array: array
 * @size: size
 * @cmp: cmp
 *
 * Return: none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (k < size)
			{
				if (cmp(array[k]))
					return (k);

				k++;
			}
		}
	}

	return (-1);
}
