#include "main.h"

/**
 * _islower - prints function that checks for lowercase character
 * @c: The character to be checks
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
