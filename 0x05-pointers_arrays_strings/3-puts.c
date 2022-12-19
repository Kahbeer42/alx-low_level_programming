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

	for (str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}


