#include "main.h"

/**
 * reverse_array - reverses the content of an array of an integer
 * @a: Array
 * @n: number of element
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
