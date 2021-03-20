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
<<<<<<< HEAD
int print_str(va_list args);
int print_char(va_list args);
int print_integer(va_list args);
int print_binary(va_list args);
int print_unsigned_int(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_heX(va_list args);
int print_reversed(va_list args);
int print_R(va_list args);

=======
int print_str(char *s);
int print_char(char ch);
int print_integer(int n);
int print_binary(unsigned int n);
int print_unsigned_int(unsigned int n);
int print_octal(unsigned int n);
int print_hex(int decimaNum, unsigned int c);
int print_reversed(char *str);
int print_R(char *str);
>>>>>>> a7fad57089a8ed96434bd6953b9c7fe43b22725b
#endif
