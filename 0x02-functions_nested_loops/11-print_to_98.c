#include "main.h"
/**
 * print_to_98 - Write a function that prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: Number to be checked
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');

		if (n == 98)
		{
			_putchar(n);
		}

		for (n = 111; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		for (n = 81; n <= 98; n++)
		{
			_putchar(n);
			_puutchar(',');
			_putchar(' );
		}
		for (n = -10; n <= 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
