#include "main.h"
/**
 * _strspn - get the lenght od substring
 * @s: the string
 * @accept: the string that have characters
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
