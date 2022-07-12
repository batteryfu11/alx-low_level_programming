#include "main.h"

/**
 * _strcpy - copies a pointed string to a buffer
 * @src: pointed string
 * @dest: buffer
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
