#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, in order
 * seperated by comma, followed by space.
 * @n: The number to be counting
 *
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
