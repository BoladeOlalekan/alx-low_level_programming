#include "main.h"
/**
 * _puts_recursion - Function that prints a
 * new string.
 * @s: String to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
