#include <stdio.h>

/**
 * main - program that computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0i || ((i % 5) == 0)
			sum += i;
	}

	printf("%d'\n", sum);

	return (0);
}

