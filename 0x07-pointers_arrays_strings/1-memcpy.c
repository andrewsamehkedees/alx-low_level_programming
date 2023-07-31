#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: the destination memory to paste
 *@src: the source memory to be copyed
 *@n: bytes
 *Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
