#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character
 * @c: Character to be checked
 * Return: 1 if c i uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char c;

	if (c == 'a')
	{
		_putchar("%c: %d\n", c, _isupper(c));
		return (0);
	}
	else if (c == 'A')
	{
		_putchar("%c: %d\n", c, _isupper(c));
	}
	return (1);
}
