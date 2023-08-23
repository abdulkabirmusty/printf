#include "main.h"

/**
 * handle_d_i - handles the 'd' and 'i' conversion specifiers
 * @args: The va_list containing the arguments
 * Return: Number of characters printed
 */

int handle_d_i(va_list args)
{
	return (print_number(va_arg(args, int)));
}
