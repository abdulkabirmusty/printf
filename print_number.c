#include "main.h"

/**
 * print_number - prints an integer
 * @n: The integer to print
 * Return: Number of digits printed
 */
int print_number(int n)
{
    int count = 0;

    if (n < 0)
    {
        _printchar('-');
        count++;
        n = -n;
    }

    if (n / 10)
        count += print_number(n / 10);

    _printchar(n % 10 + '0');
    count++;

    return (count);
}
