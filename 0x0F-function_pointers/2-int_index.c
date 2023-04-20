#include "function_pointer.h"

/**
 * int_index - a function that searches for an integer in array
 * @array:  pointer to array
 * @size: Size of the array
 * @cmp: pointer to function to compare values
 * Return: Index of first element for the cmp function
 * when not returning 0; -1 if no elements matches/size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);

	for (index = 0; index <= size; index++)
		if (cmp(array[index]))
			return (index);

	if (index == size)
		return (-1);

	return (-1);
}

