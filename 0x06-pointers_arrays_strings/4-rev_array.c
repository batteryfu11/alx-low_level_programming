#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: The array operand
 * @n: The number of elements in array a
 *
 * Return: Void
 */
void revers_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
