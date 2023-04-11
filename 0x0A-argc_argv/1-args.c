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
		printf("%d\n", argc - 1);
	return (0);
}
