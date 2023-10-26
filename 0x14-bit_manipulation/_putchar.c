#include "unistd.h"

/**
 * _putchar - writes a character
 * @c: ...
 *
 * Return: On success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
