#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, sum;
	unsigned long int l = 1000000000;
	unsigned long int a1, a2, b1, b2;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 91; i++)
	{
		sum = a + b;
		printf(", %lu", sum);
		a = b;
		b = sum;
	}

	a1 = a / l;
	a2 = a % l;
	b1 = b / l;
	b2 = b % l;

	for (i = 92; i <= 98; i++)
	{
		printf(", %lu%lu", a1 + (a2 / l), a2 % l);
		a1 = a1 + b1;
		b1 = a1 - b1;
		a2 = a2 + b2;
		b2 = a2 - b2;
	}
	printf("\n");
	return (0);
}
