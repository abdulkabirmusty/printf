#include "main.h"

int _printf(const char *format, ...)
{
    unsigned int i, count = 0, string_count = 0;
    va_list args;
      
      if (!format || (format[0] == '%' && format[1] == '\0')) 
                 return (-1);
    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _printchar(format[i]);
            count++;
        }
        else
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    _printchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    string_count = _printstring(va_arg(args, char *));
                    count += string_count;
                  count++;
                    break;
                case '%':
                    _printchar('%');
                    count++;
                    break;
                default:
                    _printchar('%');
                    _printchar(format[i]);
                    count++;
                    break;
            }
            
        }
    }
    va_end(args);
    return (count);
}

