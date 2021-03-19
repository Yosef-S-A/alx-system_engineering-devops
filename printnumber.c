#include "holberton.h"

/**
 * print_integer - displays an integer
 * @n: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_integer(int n)
{
  int a[10];
  int j, m, sum, count;

  count = 0;
  m = 1000000000;
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
 * print_binary - takes an unsigned int and displays it in binary notation
 * @n: unsigned int to print
 *
 * Return: number of digits displayed
 */
int print_binary(unsigned int n)
{
  int count;
  int i = 0;    
  int binaryNum[32]; 
  
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
 * @n: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_unsigned_int(unsigned int n)/*newly added*/
{
  unsigned int a[10];
  unsigned int j, m, sum, count;

  count = 0;
  m = 1000000000;
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
 * @n: integer to be printed as octal
 *
 * Return: number of chars and digits printed
 */
int print_octal(unsigned int n)/*newly added*/
{
  unsigned int quotient;
  int octalNumber[100], i = 1, j, count = 0;
 
  quotient = n;
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

/**
 * print_hex - displays hexadecimal number
 * @decimalNum: integer to be printed in Hex
 * @c: variable to indicate whehter uppercase or lowercase should be used
 *
 * Return: number of chars and digits printed
 */
int print_hex(int decimalNum, unsigned int c)/*newly added*/
{
  unsigned int remainder,quotient;
  int count=0,j;
  char hexadecimalNumber[100];
  quotient = decimalNum;
  while (quotient!=0) 
    {
      remainder = quotient % 16;
      if (c == 0)
	{
	  if ( remainder < 10)
	    remainder =remainder + 48; 
	  else
	    remainder = remainder + 87;
	}
      else
	{
	  if( remainder < 10)
	    remainder =remainder + 48; 
	  else
	    remainder = remainder + 55;
	}
      hexadecimalNumber[count++]= remainder;
      quotient = quotient / 16;
    }
  for (j = count-1 ;j>= 0;j--)
    _putchar(hexadecimalNumber[j]);
  return (count);
}
