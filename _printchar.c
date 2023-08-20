#include "main.h"

/**
 * _printchar - prints the character
 * @c: The character to print_out
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _printchar(char c)
{
	return (write(1, &c, 1));
}
