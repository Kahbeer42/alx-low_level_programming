#include "main.h"

/**
 * print_diagonal - print a diagonal line on the terminal
 * @n: number of times
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
		_putchar('\n');
	for (a = 0; a < n; j++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
