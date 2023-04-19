#include <stdlib.h>

/**
 * array_iterator -  function that executes a function given as parameter on each element of array.
 * @array: pointer to array
 * @size: Size of  array
 * @action: function to iterate
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int dex = 0;
		if (array == NULL || action == NULL)
		return;

	for (dex = 0; dex < size; dex++)
		action(array[dex]);
	
}
