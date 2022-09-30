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
	int y;

	if (n < 1 && n != y * y)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recursion(n));
	}
}
