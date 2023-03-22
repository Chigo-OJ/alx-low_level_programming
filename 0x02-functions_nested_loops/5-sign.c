#include "main.h"

/**
 * print_sign - prints signs of a number
 * @n: parameter of the function
 * Return: breaks out of code and returns to the caller 1, 0, -1
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
