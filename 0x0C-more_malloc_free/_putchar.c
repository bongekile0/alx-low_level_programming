#include <unistd.h>

/**
 * _putchar - writes the character c stdout
 * @c: The character to print
 *
 * Return: On
 * On error, -1is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
