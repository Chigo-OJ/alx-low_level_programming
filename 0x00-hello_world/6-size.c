#include <stdio.h>

/**
 * main - starts my code block
 *
 * Return: ends my code
 */
int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("size of char: %lu byte(s)\n", sizeof(charType));
	printf("size of int: %lu byte(s)\n", sizeof(intType));
	printf("size of long int: %lu byte(s)\n", sizeof(longintType));
	printf("size of long long: %lu byte(s)\n", sizeof(longlongintType));
	printf("size of float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
