#include "holberton.h"

/**
 * print_integer - displays an integer
 * @args: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_integer(va_list args)
{
int a[10];
int j, m, n, sum, count;

count = 0;
m = 1000000000;
n = va_arg(args, int);
a[0] = n / m;
for (j = 1; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}
if (n < 0)
{
_putchar('-');
count++;
for (j = 0; j < 10; j++)
a[j] *= -1;
}
for (j = 0, sum = 0; j < 10; j++)
{
sum += a[j];
if (sum != 0 || j == 9)
{
_putchar('0' + a[j]);
count++;
}
}
return (count);
}

/**
 * print_binary - takes an unsigned int and displays it in binary notation
 * @args: unsigned int to print
 *
 * Return: number of digits displayed
 */
int print_binary(va_list args)
{
int count;
int i = 0;    
int binaryNum[32]; 
unsigned int n;

n = va_arg(args, unsigned int);
while (n > 0) 
{ 
binaryNum[i] = n % 2; 
n = n / 2; 
i++; 
}   
for (i = i-1; i >= 0; i--)    
{   
_putchar('0'+binaryNum[i]);
count++; 
}    
return (count);
}

/**
 * print_unsigned_int - displays unsigned integer number
 * @args: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_unsigned_int(va_list args)/*newly added*/
{
unsigned int a[10];
unsigned int j, m, n, sum, count;

count = 0;
m = 1000000000;
n = va_arg(args, unsigned int);
a[0] = n / m;
for (j = 1; j < 10; j++)
{
m /= 10;
a[j] = (n / m) % 10;
}

for (j = 0, sum = 0; j < 10; j++)
{
sum += a[j];
if (sum != 0 || j == 9)
{
_putchar('0' + a[j]);
count++;
}
}
return (count);
}

/**
 * print_octal - displays octal number
 * @args: integer to be printed as octal
 *
 * Return: number of chars and digits printed
 */
int print_octal(va_list args)/*newly added*/
{
unsigned int quotient;
int octalNumber[100], i = 1, j, count = 0;

quotient = va_arg(args, unsigned int);
while (quotient != 0)
{
octalNumber[i++] = quotient % 8;
quotient = quotient / 8;
}
for (j = i - 1; j > 0; j--)
{
_putchar('0' + octalNumber[j]);
count++;
}
return (count);
}
