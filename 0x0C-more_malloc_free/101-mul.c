#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_digit - checks if a character is a digit
 * @c: character
 * Return: 1 or 0
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _print - prints a string to stdout
 * @str: string to print
 */
void _print(char *str)
{
	while (*str)
		_putchar(*str++);
}

/**
 * mul - multiplies two positive numbers
 * @num1: first number
 * @num2: second number
 * Return: result of multiplication
 */
char *mul(char *num1, char *num2)
{
	int len1, len2, len, i, j, carry;
	char *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2;
	result = calloc(len + 1, sizeof(char));
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			carry += (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i] += carry;
	}
	for (i = 0; result[i] == 0 && i < len; i++)
		;
	for (j = i; j < len; j++)
		result[j - i] = result[j] + '0';
	result[len - i] = '\0';
	return (result);
}

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: number of array elements
 * @argv: array
 * Return: 0 or 98
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int i;

	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i]; i++)
		if (!is_digit(num1[i]))
		{
			_print("Error\n");
			exit(98);
		}
	for (i = 0; num2[i]; i++)
		if (!is_digit(num2[i]))
		{
			_print("Error\n");
			exit(98);
		}
	result = mul(num1, num2);
	if (*result == '\0')
		_putchar('0');
	else
		_print(result);
	_putchar('\n');
	free(result);
	return (0);
}
