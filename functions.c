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


/**
 * printInt - print an integer
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
*/
int printInt(va_list arg)
{
	int i = va_arg(arg, int);
	int j = 0;
	int k = 1;
	int l = 0;

	if (i < 0)
	{
		putChar('-');
		j++;
		i *= -1;
	}
	while (i / k > 9)
		k *= 10;
	while (k > 0)
	{
		l = i / k;
		putChar(l + '0');
		i = i % k;
		k /= 10;
		j++;
	}
	return (j);
}

/**
 * printBinary - print a number in binary
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
*/
int printBinary(va_list arg)
{
	int i = va_arg(arg, int);
	int j = 0;
	int k = 1;
	int l = 0;

	if (i < 0)
	{
		return (0);
	}
	while (i / k > 1)
		k *= 2;
	while (k > 0)
	{
		l = i / k;
		putChar(l + '0');
		i = i % k;
		k /= 2;
		j++;
	}
	return (j);
}
