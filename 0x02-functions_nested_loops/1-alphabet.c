#include "main.h"
/**
 * print_alphabet - prints the alphabets
 *
 * Return: ends the code and returns to caller
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
