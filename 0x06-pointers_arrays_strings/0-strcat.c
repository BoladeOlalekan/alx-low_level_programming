#include "main.h"
#include "string.h"

/**
 * *_strcat - function that concatenates strings
 * @dest: string to be concatenated with *src
 * @src: string to be concatenated with *dest
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);
	return (*dest);
}
