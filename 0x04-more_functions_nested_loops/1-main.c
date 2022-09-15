#include "main.h"
#include <stdio.h>
/**
 * main - Check the code
 * @c: to declare 0 or 1
 * Return: Always 0.
 */
int _isdigit(int c);
int main(void)
{
	char (c);

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
