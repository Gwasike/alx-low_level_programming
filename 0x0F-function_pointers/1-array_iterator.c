#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * @array: array
 * @size: size
 * @action: action
 *
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (k < size)
		{
			action(array[k]);
			k++;
		}
	}
}
