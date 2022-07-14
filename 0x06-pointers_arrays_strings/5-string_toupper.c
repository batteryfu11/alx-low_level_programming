#include "main.h"

/**
 * string_toupper - changing lower case letters to upper case
 * @str: String operand
 *
 * Return: Apointer to modified string
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
