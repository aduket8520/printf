#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
/**
 * struct printObject - map a char to a func
 * @sp: is the char to be mapped
 * @func: the function pointer that returns an int
*/
typedef struct printObject
{
	char sp;
	int (*func)(va_list arg);
} printObject;

int _printf(const char *format, ...);
int putChar(char c);
int printChar(va_list arg);
int printString(va_list arg);
int printInt(va_list arg);
int printBinary(va_list arg);
#endif

