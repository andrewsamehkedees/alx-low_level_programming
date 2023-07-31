#include "main.h"
/**
 * _strchr - find the address of specific character
 * @s: array of characters
 * @c: specific character
 * Return: the location of the character or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
