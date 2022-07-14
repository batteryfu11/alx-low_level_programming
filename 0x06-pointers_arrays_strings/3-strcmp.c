#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: First string operand
 * @s2: Second string operand
 *
 * Return: Byte difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 != *s2)
		return (*s1 - *s2);

	return (0);
}
