#include "holberton.h"

/**
 * print_hex - displays hexadecimal number
 * @args: integer to be printed in Hex
 *
 * Return: number of chars and digits printed
 */
int print_hex(va_list args)
{
unsigned int remainder,quotient;
int count=0,j;
char hexadecimalNumber[100];
quotient = va_arg(args, unsigned int);
while (quotient!=0) 
{
remainder = quotient % 16;
if (remainder < 10)
remainder =remainder + 48; 
else
remainder = remainder + 87;
hexadecimalNumber[count++]= remainder;
quotient = quotient / 16;
}
for (j = count-1 ;j>= 0;j--)
_putchar(hexadecimalNumber[j]);
return (count);
}

/**
 * print_heX - displays hexadecimal number
 * @args: integer to be printed in Hex
 *
 * Return: number of chars and digits printed
 */
int print_heX(va_list args)
{
unsigned int remainder,quotient;
int count=0,j;
char hexadecimalNumber[100];
quotient = va_arg(args, unsigned int);
while (quotient!=0) 
{
remainder = quotient % 16;
if (remainder < 10)
remainder =remainder + 48; 
else
remainder = remainder + 55;
hexadecimalNumber[count++]= remainder;
quotient = quotient / 16;
}
for (j = count-1 ;j>= 0;j--)
_putchar(hexadecimalNumber[j]);
return (count);
}
