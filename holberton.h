#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

/**
 * struct print - structure for printing various types
 * @t: type to print
 * @f: function to print
 */
typedef struct print
{
  char *t;
  int (*f)(va_list);
} print_t;

int _putchar(char chr);
int _printf(const char *format, ...);
int print_str(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_heX(va_list args);
int print_reversed(va_list args);/*newly added*/
int print_R(va_list args);/*newly added*/

#endif
