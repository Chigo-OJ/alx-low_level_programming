#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that print strings followed by a new line
 * @separator: string to be printed between numbers.
 * @n: number of parameters
 * @...: extra parameters
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nl;
	unsigned int x = 0;
	char *str;

	va_start(nl, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(nl, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nl);
}
