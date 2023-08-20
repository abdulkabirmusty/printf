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

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case '%':
			switch (format[i + 1])
			{
			case 'c':
				_printchar(va_arg(args, int));
				i++;
				break;
			case 's':
				string_count = _printstring(va_arg(args, char *));
				i++;
				count += (string_count - 1);
				break;
			case '%':
				_printchar('%');
				i++;
				break;
			default:
				count++;
				break;
			}
		break;
		default:
			_printchar(format[i]);
			break;
		}
		count++;
	}
	va_end(args);
	return (count);
}
