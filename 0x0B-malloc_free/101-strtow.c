#include <stdlib.h>

/**
 * word_counter - counts the number of words
 * @str: the string
 * Return: the number of words
 */
int word_counter(char *str)
{
	int i, wc = 0, emp = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			emp = 0;
		else if (!emp)
		{
			emp = 1;
			wc++;
		}
	}

	return (wc);
}

/**
 * strtow - splits a string to words
 * @str: the string
 * Return: pointer to an array
 */
char **strtow(char *str)
{
	int i, j, k, len1, len2;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	len1 = word_counter(str);
	if (len1 == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (len1 + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < len1; i++)
	{
		if (str[i] != ' ' || i == 0)
		{
			for (j = i, len2 = 0; str[j] && str[j] != ' '; j++)
			{
				len2++;
			}
			words[k] = malloc(sizeof(char) * (len2 + 1));
			if (words[k] == NULL)
			{
				while (--k >= 0)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (j = i, len2 = 0; str[j] && str[j] != ' '; j++, len2++)
				words[k][len2 - 1] = str[j];
			words[k][len2] = '\0';
			k++;
		}
	}
	words[i] = NULL;

	return (words);
}
