#include "main.h"

/**
 * _printnumber - print custom function for %d and %i using _printchar
 * @inT: The integer to print
 *
 * Return: Number of character printed
 */

int _printnumber(va_list inT)
{
	long int dig, count = 1, len = 0, temp, x;

	dig = va_arg(inT, int);

	if (dig < 0)
	{
		_printchar('-');
		dig = -dig;
		len++;
	}

	temp = dig;
	while (temp > 9)
	{
		temp = temp / 10;
		count = count * 10;
	}

	while (count > 0)
	{
		x = dig / count;
		dig = dig % count;
		count = count / 10;
		_printchar('0' + x);
		len++;
	}

	return (len);
}
