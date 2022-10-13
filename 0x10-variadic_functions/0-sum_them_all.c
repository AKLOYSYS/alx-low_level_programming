#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_al - return the sum of all its parameter
 * @n: amount of the arguments
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
