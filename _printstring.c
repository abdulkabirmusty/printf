#include "main.h"

/**
 * _printstring - prints a string
 * @s: The string to print_out
 *
 * Return: On success, the number of characters printed.
 *         On error, -1 is returned.
 */
int _printstring(char *s)
{
	int cnt = 0;

	if (s)
	{
		while (s[cnt] != '\0')
		{
			if (_printchar(s[cnt]) == -1)
				return -1;
			cnt++;
		}
	}
	return (cnt);
}
