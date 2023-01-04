#include "main.h"

/**
 * lookout - lookout for the square root
 * @x: int
 * @y: int
 *
 * Return: int
 */
int lookout(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (lookout(x + 1, b));
}

/**
 * _sqrt_recursion - returns the square root of a number
 * @n: int to find square root of
 *
 * Return: square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (lookout(1, n));
}
