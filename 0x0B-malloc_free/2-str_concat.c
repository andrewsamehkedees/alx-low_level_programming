#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to the concatenated string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	unsigned int i, j, len1, len2;

	if (s1 != NULL)
		for (len1 = 0; s1[len1]; len1++)
			;

	if (s2 != NULL)
		for (len2 = 0; s2[len2]; len2++)
			;

	newStr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		newStr[i] = s1[i];

	for (j = 0; j < len2 ; j++, i++)
		newStr[i] = s2[j];

	newStr[i] = '\0';

	return (newStr);
}
