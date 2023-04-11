#include <stdio.h>
/**
 * main - start of code; where the code starts executing from
 * @argc: arguement count to main
 * @argv: arguement vector, contains strings called in function
 * Return: returns  0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
