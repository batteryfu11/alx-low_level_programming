#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to be concatenated upon.
 * @src: The string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_l = 0;

	while (dest[index++])
		dest_l++;

	for (index = 0; src[index]; index++)
		dest[dest_l++] = src[index];

	return (dest);
}
