#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: argc
 * @argv: argv
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int g;

	for (g = 0; g < argc; g++)
	{
		printf("%s\n", argv[g]);
	}
	return (0);
}
