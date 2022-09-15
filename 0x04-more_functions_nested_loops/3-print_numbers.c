#include "main.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9,
 * followed by a new line
 * @c: Number to be printed
 */
void print_numbers(int c)
{
	for (c = 0; c <= 9; c++)
	{
		_putchar("%d", c);
		_putchar("\n");
	}
}
