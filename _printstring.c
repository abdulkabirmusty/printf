#include "main.h"

/**
 * _printstring - prints a string
 * @s: The string to print_out
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _printstring(char *s)
{
	int cnt;
  if (s)
  {
    for (cnt = 0; s[cnt] != '\0'; cnt++)
      {
          _printchar(s[cnt]);
      }
  }
  return (0);
}
