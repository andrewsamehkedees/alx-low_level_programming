#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the c if it is upper or not.
 *@c: int c that will be checked
 * Return: return 1 if upper else will return 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
