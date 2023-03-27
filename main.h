#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int putChar(char c);
int printChar(va_list arg);
int printString(va_list arg);

#endif
