#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
    int i, j, product;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            product = i * j;
            if (product >= 10)
            {
                _putchar('0' + product / 10);
                _putchar('0' + product % 10);
            }
            else
            {
                _putchar('0' + product);
            }
            _putchar(',');
            _putchar(' ');
	    _putchar(' ');
        }
        _putchar('\n');
    }
}