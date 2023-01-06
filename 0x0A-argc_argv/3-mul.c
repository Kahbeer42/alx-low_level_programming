#include <stdio.h>

/**
 * main - multiply two numbers
 * @argc: argument count
 * @argv: argument s
 * Return: 1  or 0.
 */
int main(int argc, char **argv)
{
	int x, y, mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	mul = x * y;
	printf("%d\n", mul);
	return (0);
}
