#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1-100 but
 * for multiples of three print fizz and
 * for multiple of five print buzz
 * but for multiple of both three and five print fizzbuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%i", a);
		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

