#include "main.h"
#include <stdio.h>

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

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
