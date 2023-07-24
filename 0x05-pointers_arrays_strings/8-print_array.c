#include "main.h"
/**
 * print_array - prints elements of array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
