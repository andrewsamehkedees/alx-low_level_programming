#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newStr;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);

	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	newStr = malloc(len1 + n + 1);

	if (newStr == NULL)
		return (NULL);

	strncpy(newStr, s1, len1);
	strncpy(newStr + len1, s2, n);
	newStr[len1 + n] = '\0';
	return (newStr);
}
