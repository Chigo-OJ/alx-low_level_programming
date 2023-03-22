#include "main.h"

/**
 * _isalpha - checks ascii alphabets
 * @c: parameter of function to be checked
 * Return: breaks out of the code and returns 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
