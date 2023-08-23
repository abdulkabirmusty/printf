#include "main.h"

/**
 * handle_d_i - handles the 'd' and 'i' conversion specifiers
 * @args: The va_list containing the arguments
 * Return: Number of characters printed
 */
int handle_d_i(va_list args)
{
	return print_number(va_arg(args, int));
}
/**
 * _printf - This produces output according to a format
 * @format: The format is a character  string
 *
 * Return: Number of character printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, count = 0, string_count = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
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
					case 'd':
					case 'i':
						count += handle_d_i(args);
						i++;
					break;
					default:
						_printchar('%');
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
