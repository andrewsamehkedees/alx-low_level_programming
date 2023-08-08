#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the char
 * @ac: counter
 * @av: 2d array
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';
	return (str);
}
