#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @a: array a
 * @n: number of elements of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp;
	int count;

	n = n - 1;
	count = 0;
	while (count <= n)
	{
		temp = a[count];
		a[count++] = a[n];
		a[n--] = temp;
	}
}
