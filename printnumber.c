#include "holberton.h"

/**
 * print_integer - displays an integer
 * @n: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_integer(int n)/*newly added*/
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
 * @n: unsigned int to print
 *
 * Return: number of digits displayed
 */
int print_binary(unsigned int n)/*newly added*/
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
