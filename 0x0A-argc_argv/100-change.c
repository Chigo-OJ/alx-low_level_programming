#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A proogram that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: The arguements' counter
 * @argv: The argument's values
 * Return: 1 if the number of arguments passed is not exact
 * or 0 if exact
 */

int main(int argc, char *argv[])
{
	int num;
	int i;
	int ans;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	ans = (0);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i]);
		{
		ans++;
		num = coins[i] - num;
		}
	}
	printf("%d\n",ans);
	return (0);
}

