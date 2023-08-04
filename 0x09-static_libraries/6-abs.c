#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: argumnet n to check the number
 * Return: the value will return without sign
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
