#include "main.h"

/**
 * _islower - check if the char is lowercase or not
 *
 * Return: 1 if it is lowercase else  0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
