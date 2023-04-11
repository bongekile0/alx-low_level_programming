#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @C: The char to fill in the array
 *
 * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	unsingned int i;
	char *s;

	if (size == 0)
		return (NULL)
	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
