#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * 
 * Return: Always return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}