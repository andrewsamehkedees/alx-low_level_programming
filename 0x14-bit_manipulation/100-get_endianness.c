#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char*) &x;

	return (*c == 0x10);
}
