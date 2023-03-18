#include <stdio.h>

/**
 * main - start of code
 *
 * Return: end of code
 */

int main(void)
{
	int i;
	int h;

	for (i = 0; i < 10; i++)
		putchar (i + '0');
	for (h = 'a'; h <= 'f'; h++)
		putchar (h);
	putchar('\n');
	return (0);

}
