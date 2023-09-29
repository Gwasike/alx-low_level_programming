#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  program that adds positive numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int k;
	unsigned int g, sum = 0;
	char *a;

	if (argc > 1)
	{
		for (k = 1; k < argc; k++)
		{
			a = argv[k];

			for (g = 0; g < strlen(a); g++)
			{
				if (a[g] < 48 || a[g] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
