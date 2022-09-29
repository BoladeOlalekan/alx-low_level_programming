#include "main.h"
/**
 * factorial - Function that returns the
 * factorial of a given number
 * @n: Given number
 * Return: factorial of the given number
 * If n is less than 0, return -1
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n + (factorial(n - 1)));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
}
