#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * checkConversionspecifier - function that compares values with
 * predifiened values
 * @format: string with format specification
 * @length: stores the count of characters displayed
 * @args: the values passed to _printf to be displayed
 * Return: int
 *
 *
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
case 'c':
length += print_char(va_arg(args, int));
break;
case 's':
length += print_str(va_arg(args, char*));
break;
case 'i':
case 'd':
length += print_integer(va_arg(args, int));
break;
case 'b':
length += print_binary(va_arg(args, unsigned int));
break;
case 'u':
length += print_unsigned_int (va_arg(args, unsigned int));
break;
case 'o':
length += print_octal(va_arg(args, unsigned int));
break;
case 'x':
length += print_hex(va_arg(args, unsigned int), 0);
break;
case 'X':
length += print_hex(va_arg(args, unsigned int), 1);
break;
case 'r' :
length += print_reversed(va_arg(args, char *));
break;
case 'R':
length += print_R(va_arg(args, char*));
break;
case '%':
_putchar('%');
length++;
break;
case ' ':
length++;
break;
case '\0':
break;
default:
_putchar ('%');
_putchar(*format);
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

