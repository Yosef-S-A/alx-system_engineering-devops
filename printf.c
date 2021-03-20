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
 *
 * 
 */
int checkConversionspecifier(const char *format, unsigned int *length, va_list args)
{
unsigned int i;
print_t p[] = {
{"c", print_char},
{"s", print_str},
{"i", print_integer},
{"d", print_integer},
{"u", print_unsigned_int},
{"b", print_binary},
{"o", print_octal},
{"x", print_hex},
{"X", print_heX},
{"r", print_reversed}, /*newly added*/
{"R", print_R}, /*newly added*/
{NULL, NULL}
};
for (i = 0; p[i].t != NULL; i++)
{
if (*(p[i].t) == *format)
{
*length += p[i].f(args);
return (1);
}
}
return (0);
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
unsigned int count = 0, i = 0;

if (format == NULL)
return (-1);
va_start(args, format);
while(format[i])
{
for (; format[i] != '%' && format[i]; i++)
{
_putchar(format[i]);
count++;
}
if (!format[i])
return (count);
if (checkConversionspecifier(&format[i + 1], &count, args))
{
i += 2;
continue;
}
if (format[i + 1] == '%')
{
_putchar(format[i]);
count++;
i += 2;
continue;
}
count++;
_putchar(format[i]);
i++;
}
va_end(args);
return (count);
}
