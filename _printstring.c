#include "main.h"

/**
 * _printstring - prints a string
 * @s: The string to print_out
 *
 * Return: Number of characters printed.
 */
int _printstring(char *s)
{
	int cnt = 0;

	if (s)
	{
		while (s[cnt] != '\0')
		{
			_printchar(s[cnt]);
			cnt++;
		}
	}
	return (cnt);
}
