#include "variadic_functions.h"

/**
 * print_numbers - function that prints number
 * @n: num of parameter passed
 * @separator: separator between two number
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
