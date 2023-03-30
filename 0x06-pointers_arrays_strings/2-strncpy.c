#include "main.h"
/**
 * _strncpy - copy string function
 * @dest: destination string to be copied to
 * @src: source string  to be copied from
 * @n: number of sting
 * Return: pointer to the result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
