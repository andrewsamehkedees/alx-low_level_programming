/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first arg
 * @m: second arg
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
