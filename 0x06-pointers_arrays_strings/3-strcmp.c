#include "main.h"
/**
 * _strcmp - comparing strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: diff s1, s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
