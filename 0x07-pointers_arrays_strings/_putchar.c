#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c
 * @c: character o print
 * Return: On succes 1.
 * On error, -1 is returned, and set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
