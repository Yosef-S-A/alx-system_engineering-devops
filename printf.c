#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * checkConversionspecifier - function that validates conversion specifiers
 * @format: string with format specification
 * @length: stores the count of characters displayed
 * @args: the values passed to _printf to be displayed
 *
 * Return: number of chars displayed
 */
int checkConversionspecifier(const char *format, int length, va_list args)
{
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case '\0':
_putchar('%');
length++;
return (length);
break;
case 'c':
length += print_char(va_arg(args, int));
break;
case 's':
length += print_str(va_arg(args, char*));
break;
case '%':
_putchar('%');
length++;
break;
case ' ':
length++;
break;
default:
_putchar('%');
putchar(*format);
length += 2;
}
}
else
{
_putchar(*format);
length++;
}
format++;
}
return (length);
}

/**
 * _printf - function that duplicates the functionalities of printf
 * @format: string with format specification
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (format == NULL)
return (-1);
va_start(args, format);
count = checkConversionspecifier(format, count, args);
va_end(args);
return (count);
}
