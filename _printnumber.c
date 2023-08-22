#include "main.h"

/**
 * _printnumber - print integer using _printchar
 * @n: The integer to print
 */

void _printnumber(int n)
{
	if (n < 0)
	{
		_printchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		_printnumber(n / 10);
	_printchar((n % 10) + '0');
}
