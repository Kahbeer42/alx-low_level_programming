#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer should point to a newly allocated space in memory
 * contains the contents of s1, followed by the
 * contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, len;
	char *concat;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}
	len = len1 + len2;

	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concat[i] = s2[j];
	concat[len] = '\0';
	return (concat);
}

