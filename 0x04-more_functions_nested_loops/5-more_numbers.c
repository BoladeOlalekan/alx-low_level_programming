#include "main.h"

/**
 * more_numbers - function to print10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int i, j;

	i = 0;

	while (i < 11)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		i++;
	}
	_putchar("\n");
}