#include "function_pointers.h"

/**
 * int_index - a function that serches for an integer
 * @array: an array
 * @size: size of the int
 * @cmp: int to compare
 *
 * Return: -1, if no elemwnt matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}

