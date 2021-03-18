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
length += print_char(va_arg(args, int));
format++;
break;
case 's':
length += print_str(va_arg(args, char*));
format++;
break;
case 'i':
case 'd':
length += print_integer(va_arg(args, int));
format++;
break;
case '%':
_putchar('%');
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
