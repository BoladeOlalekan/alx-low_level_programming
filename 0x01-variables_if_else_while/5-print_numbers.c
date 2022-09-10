#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int bn;

	for (bn = 0; bn < 10; bn++)
		printf("%d", bn);
	printf("\n");
	return (0);
}
