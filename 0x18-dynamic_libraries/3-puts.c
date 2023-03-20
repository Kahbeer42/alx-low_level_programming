#include "main.h"

/**
 * _puts - prints a string, follow by a new line
 * @str: the string
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}


