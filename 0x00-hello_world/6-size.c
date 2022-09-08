#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longintType;
	long long int longlongintType;

	printf("size of a char: %zu bytes\n", sizeof(charType));
	printf("size of a an int: %zu bytes\n", sizeof(intType));
	printf("size of a float: %zu bytes\n", sizeof(floatType));
	printf("size of a long int: %zu bytes\n", sizeof(longintType));
	printf("size of a long long int: %zu bytes\n", sizeof(longlongintType));
	return (0);
}
