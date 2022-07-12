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
int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
