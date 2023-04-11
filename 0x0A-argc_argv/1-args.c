#include <stdio.h>
/**
 * main - start of code execution
 * @argc: arguement count to main
 * @argv: arguement vector/ string to main
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		argc--;
		printf("%d\n", argc);
	}
	return (0);
}
