#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in order 10 times
 */
void print_alphabet_x10(void)
{
	int l;

	for(l = 0; l < 10; l++)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
