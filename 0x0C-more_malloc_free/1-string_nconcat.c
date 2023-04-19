#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * @n: an input integer of number of string to concatenate
 * Return: pointer to concatened strings or NULL if str is NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, l1 = 0, l2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[l1])
		l1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[l2])
		l2++;

	if (n >= l2)
		n = l2;

	new_str = malloc(l1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (; i < (l1 + n); i++)
	{
		if (i < l1)
			new_str[i] = *s1, s1++;
		else
			new_str[i] = *s2, s2++;
	}
	new_str[i] = '\0';
	return (new_str);
}
