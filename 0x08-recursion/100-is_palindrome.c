#include "main.h"

int _strlen_recursion(char *s);
int is_pal(char *s, int start, int end);

/**
 * is_palindrome - returns 1 or 0
 * @s: the string
 * Return: int
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_pal(s, 0, len - 1));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find the length of it
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - function to check if s is a palindrome
 * @s: the string to check
 * @start: the start index
 * @end: the end index
 * Return: int
 */
int is_pal(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (is_pal(s, start + 1, end - 1));
}
