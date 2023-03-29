#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;

	while (l)
		_putchar(s[--l]);

	_putchar('\n');
}
