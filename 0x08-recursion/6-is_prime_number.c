#include "main.h"

/**
 * lookout - lookout to see if the number is prime
 * @x: int.
 * @y: int
 * Return: int
 */
int lookout(int x, int y)
{
	if (x <= 1 || x % y == 0)
		return (0);
	else if (x == y)
		return (1);
	else if (x > y)
		lookout(x, y + 1);
	return (1);
}

/**
 * is_prime_number - returns 1 if the input integer is a
 * prime number, otherwise return 0
 * @n: number to check
 * Return: 1, otherwise 0.
 */
int is_prime_number(int n)
{
	return (lookout(n, 2));
}
