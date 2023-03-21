#include "main.h"

/**
 * _islower - print lower case ascii
 * @c: parameter of function to be executed
 * Return: ends code and returns result to caller
 */

int _islower(int c)
{
	if (c >= 96 && c <= 122)
		return (1);
	else
		return (0);
}
