#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: argument to check the number sign
 * Return: 1 and prints + if +ve and -1 and - if -ve and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} 
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	} 
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
}
