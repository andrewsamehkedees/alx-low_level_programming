#include "main.h"

/**
 * _pow_recursion - returns the value of x power of y
 * @x: the number
 * @y: the power
 * Return: x power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
