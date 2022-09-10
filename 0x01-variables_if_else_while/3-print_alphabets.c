#include <stdio.h>

/**
*main - prints the alphabet in lower case and then in
*upper case followed by a new line.
*return : always 0 (success)
*/
 
int main(void)
{
	int uc;

	for (uc = 'a'; uc <= 'z'; uc++)
		putchar(uc);
	for (uc = 'A'; uc <= 'Z'; uc++)
		putchar(uc);
	putchar('\n');
	return (0);
}
