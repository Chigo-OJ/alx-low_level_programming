#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that sums its parameters.
 * @n: number of parameters
 * @...: extra parameters
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nl;

	int sum = 0;

	unsigned int x = 0;

	if (n == 0)
		return (0);

	va_start(nl, n);
	for (x = 0; x < n; x++)
		sum = sum + va_arg(nl, int);

	va_end(nl);
	return (sum);
}

