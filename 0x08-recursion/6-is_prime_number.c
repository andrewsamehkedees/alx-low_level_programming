#include "main.h"

int is_prime(int n, int i);

/**
 * is_prime_number - returns 1 or 0
 * @n: int number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}

/**
 * is_prime - function to check if n is prime
 * @n: int number
 * @i: the divisor to check
 * Return: int
 */
int is_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (is_prime(n, i + 1));
}
