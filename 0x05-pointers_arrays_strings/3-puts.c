#include "main.h"

/**
 * _puts - prints a string and new line
 * @str: the string operand
 */
void _puts(char *str)
{
	while(*str)
		_putchar(*str++);

	_putchar('\n');
}
