#include "main.h"
/**
 * reset_to_98 - wites a function that takes a pointer to
 * an int as parameter and updates the v
 * alue it points to to 98
 * @n: Value to be checked
 */
void reset_to_98(int *n)
{
	int myInt = 98;
	int *n = &myInt;

	_putchar("%d", myInt);
}
