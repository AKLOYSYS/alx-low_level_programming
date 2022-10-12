#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to name.
 * @f: function pointer.
 * Return: void/
 */

void print_name(cahr *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
