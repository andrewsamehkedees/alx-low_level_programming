#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: c is the car argument which gonna be checked
 * Return: 1 if c is a letter else gonna return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
