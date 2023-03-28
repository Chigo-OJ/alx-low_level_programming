#include "main.h"

/**
 * swap_int - swaps value of int pararmeters
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
