#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - ...
 * @a: a
 * @b: b
 *
 * Return: none
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - op sub
 * @a: a
 * @b: b
 *
 * Return: none
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - op mul
 * @a: a
 * @b: b
 *
 * Return: none
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - op div
 * @a: a
 * @b: b
 *
 * Return: none
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - op mod
 * @a: a
 * @b: b
 *
 * Return: none
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
