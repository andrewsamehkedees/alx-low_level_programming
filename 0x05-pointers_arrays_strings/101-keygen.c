#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random passwords
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	char c;
	int target_sum = 2772;
	int min_ascii = 32;
	int max_ascii = 126;

	srand(time(0));

	while (sum < target_sum - max_ascii)
	{
		c = rand() % (max_ascii - min_ascii + 1) + min_ascii;
		sum += c;
		putchar(c);
	}

	putchar(target_sum - sum);

	return (0);
}
