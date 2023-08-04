#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: the number of the array
 * @argv: the array of commands
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
