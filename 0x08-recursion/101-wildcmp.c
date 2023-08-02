#include "main.h"

int wild(char *s1, char *s2);

/**
 * wildcmp - compares two strings and returns 1 or 0
 * @s1: the first string
 * @s2: the second string
 * Return: int
 */
int wildcmp(char *s1, char *s2)
{
	return (wild(s1, s2));
}

/**
 * wild - helper function to compare two strings
 * @s1: the first string
 * @s2: the second string
 * Return: int
 */
int wild(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wild(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wild(s1, s2 + 1));
		else if (wild(s1, s2 + 1))
			return (1);
		else
			return (wild(s1 + 1, s2));
	}
	else
		return (0);
}
