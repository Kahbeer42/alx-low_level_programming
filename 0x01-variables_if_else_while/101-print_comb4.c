#include <stdio.h>

/**
 * main - prints all possible combination of three different digits
 * in ascending order separated by comma, followed by space
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ')!
			}
		}
	}

	putchar('\n');

	return (0);
}


