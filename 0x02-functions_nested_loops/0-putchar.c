#include "main.h"
/**
 * main - A function that prints _putchar with a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char f[] = "_putchar";

	int p;

	for (p = 0; p < 5; p++)
	{
		_putchar(f[p]);
	}
	_putchar('\n');
	return (0)
}
