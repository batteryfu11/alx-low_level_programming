#include "main.h"

int sqrt_find(int num, int sqrt);
int _sqrt_recursion(int n);

/**
 * sqrt_find - Finds the natural square root of any number argument.
 * @num: The number to find the square root of.
 * @sqrt: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int sqrt_find(int num, int sqrt)
{
	if ((sqrt * sqrt) == num)
		return (sqrt);

	if (sqrt == num / 2)
		return (-1);

	return (sqrt_find(num, sqrt + 1));
}

/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: The number whose square root is required.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
	int sqrt = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (sqrt_find(n, sqrt));
}
