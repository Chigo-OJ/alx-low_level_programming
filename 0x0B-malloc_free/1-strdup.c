#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function which returns a pointer to a newly allocated
 * space in memory, which contains a duplicate of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: A pointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int c = 0;

	if (str == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		(i++);

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == 0)
		return (NULL);

	for (c = 0; str[c]; c++)
		new_str[c] = str[c];
	return (new_str);
}
