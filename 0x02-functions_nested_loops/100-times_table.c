#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: the times table number
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(' ');
					if (product >= 100)
					{
						_putchar('0' + product / 100);
						_putchar('0' + (product / 10) % 10);
					}
					else if (product >= 10)
					{
						_putchar(' ');
						_putchar('0' + product / 10);
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				_putchar('0' + product % 10);
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}
