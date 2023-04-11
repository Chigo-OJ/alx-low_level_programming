#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of code that mutiplies two arguements
 * @argc: arguement count
 * @argv: arguement vector/ arguement string taken by main
 * Return: returns 0 or 1
 */

int main(int argc, char *argv[])
{
	int ans;
	int mul1;
	int mul2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		{
			mul1 = atoi(argv[1]);
			mul2 = atoi(argv[2]);
			ans = mul1 * mul2;
			printf("%d\n", ans);
		}
		return (0);
}
