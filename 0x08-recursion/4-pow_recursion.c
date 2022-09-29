#include "main.h"
/**
 * _pow_recursion - function to raise x to power of y
 * @x: Integer to be raised to
 * power of y
 * @y: Integer power x is raised to
 * Return: Value of x raised to y, or
 * -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
