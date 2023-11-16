#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print anything based on a format string.
 * @format: Format string containing format specifiers.
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    int num;
    float flt;
    char c;

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                c = va_arg(args, int);
                printf("%c", c);
                break;
            case 'i':
                num = va_arg(args, int);
                printf("%d", num);
                break;
            case 'f':
                flt = va_arg(args, double);
                printf("%f", flt);
                break;
            case 's':
                str = va_arg(args, char *);
                if (str == NULL)
                    str = "(nil)";
                printf("%s", str);
                break;
        }

        if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[i + 1] != '\0')
            printf(", ");

        i++;
    }

    printf("\n");
    va_end(args);
}
