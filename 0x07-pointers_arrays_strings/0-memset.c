<<<<<<< HEAD
#include <main.h>

/**
 * -memset - fills mempry with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dets.
 */

car *_memset(char _s, char b, unsigned int n)
=======
#include "main.h"

/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
*/

char *_memset(char *s, char b, unsigned int n)
>>>>>>> f002eaae3c877af17eaf53256ec407198bb92d9f
{
	unsigned int i;

	for (i = 0; i < n; i++)
<<<<<<< HEAD
		*(s + i) = b;
=======
		*(s + i) =  b;
>>>>>>> f002eaae3c877af17eaf53256ec407198bb92d9f

	return (s);
}
