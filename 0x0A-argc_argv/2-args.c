#include <stdio.h>

/**
 * main - peints all argument receives
 * @argc: argument count
 * @argv: argumeent s
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int j;

	for (j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);

}
