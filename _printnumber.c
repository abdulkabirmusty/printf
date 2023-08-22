#include "main.h"

/**
 * _printnumber - print custom function for %d and %i using _printchar
 * @inT: The integer to print
 *
 * Return: Number of character printed
 */

int _printnumber(va_list inT)
{
	int i, count = 0, len = 0, temp, x;

	int dig = va_arg(inT, int);

	if (dig < 0)
	{
		_printchar('-');
		dig = -dig;
		count++;
	}

	temp = dig;
	while (temp > 9)
	{
		temp = temp / 10;
		len++;
	}
	len++;

	while (len > 0)
	{
		x = dig;
		temp = 1;
		for (i = 1; i < len; i++)
		{
			x = x / 10;
			temp = temp * 10;
		}
		x = x % 10;
		_printchar('0' + x);
		len--;
		count++;
	}

	return (count);
}
