#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	long primen = 612852475143, div;

	while (div < (primen / 2))
	{
		if ((primen % 2) == 0)
		{
			primen /= 2;
			continue;
		}

		for (div = 3; div < (primen / 2); div += 2)
		{
			if ((primen % div) == 0)
				primen /= div;
		}
	}

	printf("%ld\n", primen);

	return (0);
}
