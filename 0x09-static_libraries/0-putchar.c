#include <unistd.h>

/**
 * _putchar - writes the character
 * @c: The character
 * Return: return 1 or -1
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
