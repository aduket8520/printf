#include "main.h"
#include <stdlib.h>

/**
 * printOctal - print a number in octal
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
 */
int printOctal(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int j = 0;
	int k = 1;
	int l = 0;

	while (i / k > 7)
		k *= 8;
	while (k > 0)
	{
		l = i / k;
		putChar(l + '0');
		i = i % k;
		k /= 8;
		j++;
	}
	return (j);
}

/**
 * printHexLower - print a number in lowercase hex
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
 */
int printHexLower(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int j = 0;
	int k = 1;
	int l = 0;

	while (i / k > 15)
		k *= 16;
	while (k > 0)
	{
		l = i / k;
		if (l < 10)
			putChar(l + '0');
		else
			putChar(l + 'a' - 10);
		i = i % k;
		k /= 16;
		j++;
	}
	return (j);
}

/**
 * printHexUpper - print a number in uppercase hex
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
 */
int printHexUpper(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int j = 0;
	int k = 1;
	int l = 0;

	while (i / k > 15)
		k *= 16;
	while (k > 0)
	{
		l = i / k;
		if (l < 10)
			putChar(l + '0');
		else
			putChar(l + 'A' - 10);
		i = i % k;
		k /= 16;
		j++;
	}
	return (j);
}

/**
 * printUnsignedInt - print an unsigned int
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
 */
int printUnsignedInt(va_list arg)
{
	unsigned int i = va_arg(arg, unsigned int);
	int j = 0;
	int k = 1;
	int l = 0;

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
 * printStringReverse - print a string in reverse
 * @arg: the list of variadic arguments
 *
 * Return: the number of characters printed
 */
int printStringReverse(va_list arg)
{
	char *str = va_arg(arg, char *);
	char *s = str;
	int i, j;

	if (str == NULL)
	{
		putChar('(');
		putChar('n');
		putChar('u');
		putChar('l');
		putChar('l');
		putChar(')');
		return (6);
	}

	j = 0;
	for (i = 0; *s != '\0'; s++)
		i++;
	while (i >= 0)
	{
		j += putChar(*(str + i));
		i--;
	}
	return (j);
}
