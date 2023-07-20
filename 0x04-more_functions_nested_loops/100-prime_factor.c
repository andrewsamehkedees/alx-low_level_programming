#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of 612852475143
 *
 * Return: after finish will return 0.
 */
int main(void)
{
	long num = 612852475143;
	long maxPrime = -1;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}

	for (int i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			maxPrime = i;
			num /= i;
		}
	}

	if (num > 2)
		maxPrime = num;

	printf("%ld\n", maxPrime);

	return (0);
}
