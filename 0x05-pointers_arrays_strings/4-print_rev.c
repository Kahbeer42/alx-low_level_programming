#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: strings  to be print
 *
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;
	while (s[j] != '\0')
		j++;


	for (i = j; 1 >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

