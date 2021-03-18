#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */
int print_char(char ch)
{
_putchar(ch);
return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */
int print_str(char *s)
{
int count;

if (s == NULL)
s = "(null)";
for (count = 0; s[count]; count++)
{
_putchar(s[count]);
}
return (count);
}
