#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the
 * arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, k, size = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;
		while (s[j++])
			size++;
		size++;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < size; i++)
	{
		s = av[i];
		k = 0;
		while (s[j])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
