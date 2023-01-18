#include "function_pointers.h"

/**
 * print_name - a functions that print a name
 * @name: the given name
 * @f: functions of the name
 *
 * Return; void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
