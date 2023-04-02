#include "main.h"

/**
 * print_diagonal - Draws a diagonal lires according piraneter
 * @n: The number of times to print diagonal lires
 * Return: empty
 */

void print_diagonal(int n)

{
	int x, y

	if (n <= 0)
	{
	_putchar('\n');
	}
	else

	for (x = 0, x < n, x++)

	for (y = 0, y < n, y++)
	{
	_putchar(32);
	}
	_putchar(92);
	{
	_putchar('\n');
	}
}
