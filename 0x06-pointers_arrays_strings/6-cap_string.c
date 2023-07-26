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
	int cap_next = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap_next && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			cap_next = 0;
		}
		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' 
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' 
				|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' 
				|| s[i] == '}')
			cap_next = 1;
		else
			cap_next = 0;
	}

	return (s);
}
