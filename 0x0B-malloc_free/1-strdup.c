#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - A pointer to a newly allocated space in memory
 *		with a copy of the string as a parameter.
 * @str: string operand
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	m = malloc(size * sizeof(*str) + 1);

	if (m != 0)
		for (; i <size; i++)
			m[i] = str[i];
	return (m);
}
