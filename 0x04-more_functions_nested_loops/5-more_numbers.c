#include "main.h"

/**
 * more_numbers - prints 10 times a number from 0-14
 *
 * Return: Void
 */
void more_numbers(void)
{
	int num, i;

	for (i = 0; i <= 9; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}	
}
