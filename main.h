#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _printchar(char c);
int _printstring(char *s);
int _printnumber(va_list inT);
int Task1_printf(const char *format, ...);

#endif
