#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: strings  to be print
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
	{
		_putchar(s[j];
		j++;
	}

	for (i = j - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}

