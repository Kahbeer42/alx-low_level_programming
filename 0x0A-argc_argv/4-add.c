#include <stdio.h>

/**
 * main - adds positive number
 * @argc: Thw numbers of arguments passed to the program
 * @argv: An arrays of pointers to the argument
 * Return: 1 if one of the number contains symbol that are non digit
 */
int main(int argc, char **argv)
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
