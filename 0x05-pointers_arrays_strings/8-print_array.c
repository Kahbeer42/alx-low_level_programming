#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of arrays of int
 * separated by comma, followed by space.
 * @a: int to be check
 * @n: int to be check
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
		if (y != n - 1)
		printf("%d, ", a[y]);
		else
			printf("%d", a[y]);
	printf("\n");
}
