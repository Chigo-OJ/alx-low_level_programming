#include <stdio.h>

/**
 * main -start of code
 *
 * Return: end of code
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
