#include <stdio.h>

/**
 * main - prints first 98 Fibonacci numbers
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;
	unsigned long a = 0, b = 1, c, a_half1, a_half2, b_half1, b_half2;

	for (i = 0; i < 91; i++)
	{
		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	a_half1 = a / 1000000000;
	a_half2 = a % 1000000000;
	b_half1 = b / 1000000000;
	b_half2 = b % 1000000000;
	for (; i < 98; i++)
	{
		c = a + b;
		a_half1 += b_half1;
		a_half2 += b_half2;
		if (a_half2 > 1000000000)
		{
			a_half1++;
			a_half2 %= 1000000000;
		}
		if (i != 97)
			printf("%lu%lu, ", a_half1, a_half2);
		else
			printf("%lu%lu\n", a_half1, a_half2);
		b_half1 = a_half1;
		b_half2 = a_half2;
	}
	return (0);
}
