#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _putchar(char chr);
int _printf(const char *format, ...);
int print_str(char *s);
int print_char(char ch);
int print_integer(int n);
int print_binary(unsigned int n);
int print_unsigned_int(unsigned int n);
int print_octal(unsigned int n);
int print_hex(int decimalNum, unsigned int c);
int print_reversed(char *str);
int print_R(char *str);

#endif
