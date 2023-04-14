#include "main.h"

/**
 * _abs - checks for absolute value
 * @a: parameter for _abs to be checked
 * Return: end of code and returns int a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
