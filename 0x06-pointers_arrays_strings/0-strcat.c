#include<stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0, temp;

	for (i = 0; dest[i] != '\0'; i++)
		j++;
	temp = j;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[temp] = src[i];
		temp++;
	}
	dest[temp] = '\0';
	return (dest);
}

