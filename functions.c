#include "main.h"
#include <unistd.h>

/**
 * putChar - print a character to stdout
 * @c: character to be printed
 * Return: 1 if goes well
 * otherwise -1
*/
int putChar(char c)
{
	return (write(1, &c, 1));
}

/**
 * printChar - print a character to the standard output
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
*/
int printChar(va_list arg)
{
	char c = va_arg(arg, int);

	return (putChar(c));
}

/**
 * printString - print a string
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
*/
int printString(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
		putChar(s[i]);
	return (i);
}
