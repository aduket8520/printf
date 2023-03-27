#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - print a formatted string
 * @format: the format string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, printed;
	va_list ap;

	if (format == NULL)
		return (-1);

	printed = 0;
	va_start(ap, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				printed += printChar(ap);
				break;
			case 's':
				printed += printString(ap);
				break;
			case '%':
				printed += putChar('%');
				break;
			case 'd':
			case 'i':
				printed += printInt(ap);
				break;
			default:
				break;
			}
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
