#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to char
 * @s: pointer to change
 * @to: string to change pointer to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
