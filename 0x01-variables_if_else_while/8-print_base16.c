#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all the numbers of base 16 in lower case
 *		followed by a new line
 * Return: 0
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	char b;
	b = 'a';

	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
