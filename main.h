#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _printchar(char c);
int _printstring(char *s);
int print_number(int n);
int handle_d_i(va_list args);
#endif
