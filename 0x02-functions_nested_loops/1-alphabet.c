#include "main.h"
/**
 * main -  a function that prints the alphabet, in lowercase, followed by a new line
 *
 * Return: always 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z');
	{
		putchar (letter);
		letter++;

	}
	_putchar ('\n');
}
