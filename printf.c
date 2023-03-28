#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - print a formatted string
 * @format: the format string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, printed;
	va_list ap;
	printObject printObjects[] = {
		{'c', printChar}, {'s', printString},
		{'d', printInt}, {'i', printInt},
		{'b', printBinary}, {'o', printOctal},
		{'x', printHexLower}, {'X', printHexUpper},
		{'u', printUnsignedInt}, {'\0', NULL}
	};

	if (format == NULL)
		return (-1);
	printed = 0;
	va_start(ap, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 10; j++)
			{
				if (format[i + 1] == printObjects[j].sp)
				{
					printed += printObjects[j].func(ap);
				}
			}
			if (format[i + 1] == '%')
				printed += putChar('%');
			i++;
		}
		else
		{
			printed += putChar(format[i]);
		}
	}
	va_end(ap);
	return (printed);
}
