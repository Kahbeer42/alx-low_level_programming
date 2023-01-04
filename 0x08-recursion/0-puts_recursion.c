#include "main.h"

/**
 * _puts_recursion - prints a strings, follow by a new line
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar(10);
	}
}
