#include "main.h"
/**
 * _atoi - converts a string to  int
 * @s: pointer to the string to convert
 *
 * Return: the converted int
 */
int _atoi(char *s)
{
	int i = 0;
	int sign_count = 0;
	int result = 0;
	int length = 0;
	int first_digit_found = 0;
	int digit;

	while (s[length] != '\0')
		length++;

	while (i < length && first_digit_found == 0)
	{
		if (s[i] == '-')
			++sign_count;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';

			if (sign_count % 2)
				digit = -digit;

			result = result * 10 + digit;

			first_digit_found = 1;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;

			first_digit_found = 0;
		}
		i++;
	}

	if (first_digit_found == 0)
		return (0);

	return (result);
}
