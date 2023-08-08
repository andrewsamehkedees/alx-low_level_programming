#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string
 * Return: A pointer to an array
 */
char **strtow(char *str)
{
	char **tab;
	int i, j, k, l, count = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	tab = malloc(sizeof(char *) * (count + 1));
	if (tab == NULL)
		return (NULL);
	for (i = 0, j = 0; str[i]; i++)
		if (str[i] != ' ')
		{
			for (k = i; str[k] != ' ' && str[k]; k++)
				;
			tab[j] = malloc(k - i + 1);
			if (tab[j] == NULL)
			{
				for (k = 0; k < j; k++)
					free(tab[k]);
				free(tab);
				return (NULL);
			}
			for (l = 0; i < k; i++, l++)
				tab[j][l] = str[i];
			tab[j++][l] = '\0';
		}
	tab[j] = NULL;
	return (tab);
}
