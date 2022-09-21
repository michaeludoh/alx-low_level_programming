#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array up to n element
 * @a: array to be read from
 * @n: number of element to read
 * Return: Always (0)
 */

void print_array(int *a, int n)
{
	int i;

	int (0);
	for (n--; n >= 0; (n--); i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
