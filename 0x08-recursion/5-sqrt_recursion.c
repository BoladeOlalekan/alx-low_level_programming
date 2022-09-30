#include "stdio.h"
/**
 * _sqrt_recursion - function to return natural
 * square root of a number
 * @n: Integer to return its square root
 * Return: Natural square root of number,
 * or -1 if n does not have natural square root
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - find square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square(n, val + 1));
	else
		return (-1);
}
