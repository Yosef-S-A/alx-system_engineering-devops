#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that duplicates the functionalities of printf
 * @format: string with format specification
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
va_list args;
int length = 0;
char *printstr;
char printchar;
int printInteger;

if (format == NULL)
return (-1);

va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
printchar = va_arg(args, int);
length += print_char(printchar);
format++;
break;
case 's':
printstr = va_arg(args, char*);
length += print_str(printstr);
format++;
break;
case '%':
putchar('%');
format++;
length++;
break;
case ' ':
format++;
length++;
break;
case '\0':
break;
default:
_putchar(*format);
format++;
length += 2;
}
}
else
{
_putchar(*format);
format++;
length++;
}
}

va_end(args);

return (length);
}
