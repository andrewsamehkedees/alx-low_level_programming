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
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atol(argv[1]);

	num2 = atol(argv[2]);

	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}
