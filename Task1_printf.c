#include "main.h"

/**
 * Task1_printf - This produce output base on a format
 * @format: The format is a character string
 *
 * Return: Number of character print
 */

int Task1_printf(const char *format, ...)
{
	unsigned int i, count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			_printnumber(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_printchar('%');
			i++;
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
