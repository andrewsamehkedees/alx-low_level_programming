#include <stdio.h>
#include <string.h>
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: size
 *
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l1, l2, n, carry;

	l1 = strlen(n1);
	l2 = strlen(n2);
	if (l1 > size_r || l2 > size_r)
		return (0);
	i = l1 - 1;
	j = l2 - 1;
	k = 0;
	carry = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		n = carry;
		if (i >= 0)
			n += n1[i--] - '0';
		if (j >= 0)
			n += n2[j--] - '0';
		if (k >= size_r - 1)
			return (0);
		r[k++] = n % 10 + '0';
		carry = n / 10;
	}
	r[k] = '\0';
	for (i = 0; i < k / 2; i++)
	{
		char c = r[i];

		r[i] = r[k - i - 1];
		r[k - i - 1] = c;
	}
	return (r);
}
