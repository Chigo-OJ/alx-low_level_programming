#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: The arguments' counter
 * @argv: The argument's vector
 * Return: 0 as Success
 */
int main(int argc, char **argv)
{
	int num;
	int i;
	int ans = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		ans = num + ans;
	}
	printf("%d\n", ans);
	return (0);
}
