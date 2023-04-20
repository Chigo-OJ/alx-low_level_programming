#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - A function that print numbers followed by a new line.
 * @separator: string to print between num
 * @n: number of parameter
 * @...: extra parameters
 * Return: values of parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nl;
	unsigned int x = 0;
	int num;

	va_start(nl, n);
	for (x = 0; x < n; x++)
	{
		num = va_arg(nl, int);
		printf("%d", num);
		if (separator == NULL || x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nl);
}
