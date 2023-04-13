#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initializes it with a char (c).
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: A pointer to the array/NULL if failure.
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i = 0;

	string = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		string[i] = c;
	return (string);
}
