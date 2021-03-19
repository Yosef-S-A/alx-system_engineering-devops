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
s = "";
for (count = 0; s[count]; count++)
{
_putchar(s[count]);
}
return (count);
}

/**
 * print_reverse - displays a string reversed
 * @str: string to display
 *
 * Return: number of chars printed
 */
int print_reversed(char *str)/*newly added*/
{
int i, j, count = 0;

for (i = 0; str[i]; i++)
;
for (j = i-1; j >= 0; j--)
{
_putchar(str[j]);
count++;
}
return (count);
}

/**
 * print_R - displays a string after applying rot13
 * @string: string to be converted into rot13
 *
 * Return: number of chars displayed
 */
int print_R(char *str)/*newly added*/
{
unsigned int i, j;
int count = 0;
char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i]; i++)
{
for (j = 0; in[j]; j++)
{
if (in[j] == str[i])
{
_putchar(rot13[j]);
count++;
break;
}
}
if (!in[j])
{
_putchar(str[i]);
count++;
}
}
return (count);
}
