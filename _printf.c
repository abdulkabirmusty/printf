#include "main.h"
/**
 * _printf - output text
 * @format: the format specifier
 * Return: (COUNT);
 */
int _printf(const char *format, ...)
{
	unsigned int i, string_count, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_printchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_printchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			string_count = _printstring(va_arg(args, char *));
			i++;
			count += (string_count);
		}
		else if (format[i + 1] == '%')
		{
			_printchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
