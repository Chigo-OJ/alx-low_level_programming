#include "main.h"

/**
 * print_last_digit - function that prints last digit
 * @i: parameter of the function above
 * Return: ends code and returns to caller last digit
 */

int print_last_digit(int i)
{
	int r;

	r = i % 10;
	if (i < 0)
		r = -r;
	_putchar(r + '0');
	 return (r);
}
