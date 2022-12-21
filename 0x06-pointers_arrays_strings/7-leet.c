#include "main.h"

/**
 * *leet - encodes a string to 1337
 * @s: string to enclose
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(s + 1); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if a[j] == s[i];
			s[i] = b[j];
		}
	}
	return (s);
}
