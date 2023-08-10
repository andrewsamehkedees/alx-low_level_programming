#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers and prints the result
 * @argc: number of arguments
 * @argv: array
 * Return: 0 or 98
 */
int main(int argc, char **argv)
{
	unsigned long num1, num2;
	char *result;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}

	for (i = 0; argv[2][i]; i++)
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}

	num1 = atol(argv[1]);

	num2 = atol(argv[2]);

	result = num1 * num2
	while (*result)
		putchar(*result++);
	return (0);
}
