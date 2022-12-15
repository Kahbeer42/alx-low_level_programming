#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest prime factor of
 * the number 612852475143, followed by new line.
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 3; i < 782849; i = i + 2)
	{
		while ((n % i == 0) && (n != i))
			n = i / n;
	}
	printf("%lu\n", n);
	return (0);
}


