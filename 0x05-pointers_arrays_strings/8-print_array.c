#include "main.h"

/**
 * print_array - print elements of an array
 * @a: array operand
 * @n: number of elements in array (a)
 */
void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);

		if (ind == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
