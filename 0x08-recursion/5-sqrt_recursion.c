#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the int number
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}

/**
 * _sqrt - square root of n
 * @n: number to square rooted
 * @i: the guess square root
 * Return: int
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (_sqrt_helper(n, i + 1));
}
