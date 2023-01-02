#include "main.h"

/**
 * *_strstr - finds the first occurrence of the substring
 * needle in the string haystack
 * @haystack: The string
 * @needle: The substring
 *
 * Return: a pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);

}
