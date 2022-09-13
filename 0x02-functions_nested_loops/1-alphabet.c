#include "main.h"

/**
 * main - Prints the alphabet, in lowercase, followed by a new line.
 */
void main(void)
{
	char alph1 = 'a';

	while (alph1 <= 'z')
	{
		_putchar(alph1);
		alph1++;
	}

	_putchar("\n");
}
