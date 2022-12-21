#include "main.h"

/**
 * reverse_array - reverses the content of an array of an integer
 * @a: Array
 * @n: number of element
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int j, c;

	for (j = 0; (j < (n - j) / 2); j++)
		{
		c = a[j];
		a[j] = a[n - 1 - j];
		a[n - 1 - j] = c;
		}
}
