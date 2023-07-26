#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source
 * @n: maximum numbers
 *
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i]
	for (; i < n; j++)
		dest[i] = '\0';

	return (dest);
}
