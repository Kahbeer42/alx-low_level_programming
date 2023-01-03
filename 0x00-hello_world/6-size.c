#include <stdio.h>

/**
 * main - print size of data types in C
 * code by kbest
 * Return: 0
 */
int main(void)
{
	printf("size of type 'char': %lu bytes\n" sizeof(char));
	printf("size of type 'int': %lu bytes\n" sizeof(int));
	printf("size of type 'long int': %lu bytes\n" sizeof(long int));
	printf("size of type 'long long int': %lu bytes\n" sizeof(long long int));
	printf("size of type 'float': %lu bytes\n" sizeof(float));

	return (0);

}
