#include <stdio.h>
/**
 * main - start of code
 * @argc: arguement count
 * @argv: arguement vector/ arguement string taken by main
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
		return (0);
}
