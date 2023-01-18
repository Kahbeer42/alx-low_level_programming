#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - print the opcodes of this program.
 * @a: address of the main function
 * @n: number of bytes
 * Return: viid
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: number of arg passed
 * @argv: pointer to the arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opcodes((char *)&main, n);
	return (0);
}
