#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of characters,
 *		and initializes it with a specific character.
 * @size: array size.
 * @c: char to initialize
 *
 * Return: A pointer to the initialized array  or NULL
 */

char *create_array(unsigned int size, char c)
{
char *m = malloc(size);
if (size == 0 || m == 0)
	return (0);

while (size--)
	m[size] = c;

return (m);
}
