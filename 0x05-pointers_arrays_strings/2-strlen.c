#include "main.h"

/**
 * _strlen - function that executes the string length
 * @s: it's length to be printed
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
