#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string
 * Return: A pointer or NULL
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, l, wc = 0, len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			wc++;

	if (wc == 0)
		return (NULL);

	tab = malloc(sizeof(char *) * (wc + 1));

	if (tab == NULL)
		return (NULL);

	for (i = 0, j = 0; j < wc; j++)
	{
		while (str[i] == ' ')
			i++;

		for (k = i; str[k] && str[k] != ' '; k++)
			;

		len = k - i;

		tab[j] = malloc(sizeof(char) * (len + 1));

		if (tab[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(tab[k]);

			free(tab);
			return (NULL);
		}

		for (l = 0; l < len; l++)
			tab[j][l] = str[i + l];

		tab[j][l] = '\0';
		i += len;
	}

	tab[j] = NULL;
	return (tab);
}
