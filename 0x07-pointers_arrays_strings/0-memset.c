#include "main.h"
/**
 * _memset - fill a part of memory with a specific value
 * @s: starting address
 * @b: the value
 * @n: number of bytes
 * Return: array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
