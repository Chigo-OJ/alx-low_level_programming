#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i;
	int ci;

	if (s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	ci = i;
	ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + ci + 1));
	if (concat == NULL)
		return (NULL);
	i = ci;
	ci = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while(s2[i] != '\0')
	{
		concat[i] = s2[i];
		ci++, i++;
	}
	concat[i] = '\0';
	return (concat);
}