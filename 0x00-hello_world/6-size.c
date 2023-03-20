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
	unsigned long int longintType;
	long long int longlongintType;
	float floatType;

	printf("size of a char: %lu byte(s)\n", sizeof(charType));
	printf("size of a int: %lu byte(s)\n", sizeof(intType));
	printf("size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("size of a long long int: %lu byte(s)\n", sizeof(longlongintType));
	printf("size of a float: %lu byte(s)\n", sizeof(floatType));
	return (0);
}
