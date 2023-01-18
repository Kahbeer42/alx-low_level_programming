#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - return the sum of a and b
 * @a: int a
 * @b: int b
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - return the difference of a and b
 * @a: int a
 * @b: int b
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - return the product of a and b
 * @a: ...
 * @b: ...
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of the division of a and b
 * @a: ...
 * @b: ...
 * Return: result of division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error/n");
		Exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: ...
 * @b: ...
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		Exit(100);
	}
	return (a % b);
}
