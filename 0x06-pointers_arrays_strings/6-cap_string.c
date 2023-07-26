#include "main.h"

/**
 * cap_string - capitalizes all words
 * @s: string
 *
 * Return: pointer
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 'a' + 'A';

	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i - 1] == ' ' && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] = s[i] - 'a' + 'A';
	}

	return (s);
}
