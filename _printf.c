#include "main.h"

/**
 * _printf - output text
 * @format: the format specifier
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0, string_count;
	va_list args;

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == 'c')
			{
				_printchar(va_arg(args, int));
				count++;
			}
			else if (format[i] == 's')
			{
				string_count = _printstring(va_arg(args, char *));
				if (string_count == -1)
					return (-1);
				count += string_count;
			}
			else if (format[i] == '%')
			{
				_printchar('%');
				count++;
			}
			else
			{
				_printchar('%');
				_printchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_printchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}
