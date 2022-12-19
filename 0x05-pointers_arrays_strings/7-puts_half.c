#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char to be printed
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')

	if (i + 1 % 2 != '\0')
		n = (i - 1) / 2;

	else
		n = (i / 2);
	n++;

	for (n = j; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar(10);
}
