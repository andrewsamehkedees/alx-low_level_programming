#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space for the String
 * @str: the string to be doublecated
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
	char *newStr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	newStr = malloc(sizeof(char) * (len + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		newStr[i] = str[i];

	newStr[len] = '\0';

	return (newStr);
}
