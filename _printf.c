#include "main.h"
/**
 * _printf - output text
 * @format: the format specifier
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int count;
	unsigned int string_count;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
		i++;
		switch (format[i])
		{
		case 'c':
			_printchar(va_arg(args, int));
			count++;
			break;
		case 's':
			string_count = _printstring(va_arg(args, char *));
			count += string_count;
			break;
		case '%':
			_printchar('%');
			count++;
			break;
		default:
			_printchar('%');
			_printchar(format[i]);
			count += 2;
			break;
			}
		}
		else
		{		
			_printchar(format[i]);
		}
		count++;
	}
	va_end(args);
	return (count);
}
