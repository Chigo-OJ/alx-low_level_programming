#include "main.h"

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int e = 0, i, n;

	while (str[e] != '\0')
		e++;

	if (e % 2 == 0)
		n = e / 2;

	else
		n = (e + 1) / 2;

	for (i = n; i < e; i++)
		_putchar(str[i]);

	_putchar('\n');
}
