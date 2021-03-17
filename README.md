_printf
_printf is a customized implementation of the C function printf. 

Prototype: int _printf(const char *, ...);

Examples
String
Input: _printf("%s\n", 'This is a string.');
Output: This is a string.
Integer
Input: _printf("There are %i dozens in a gross\n", 12);
Output: There are 12 dozens in a gross

Project Requirements
All files will be compiled on Ubuntu 14.04 LTS
Programs and functions will be compiled with gcc 4.8.4 using flags -Wall -Werror -Wextra and -pedantic
Code must follow the Betty style
Global variables are not allowed
Authorized functions and macros:
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)
Mandatory Tasks
 Write function that produces output with conversion specifiers c, s, and %.
 Handle conversion specifiers d, i.
 Create a man page for your function.
File Descriptions
printf.c: - contains the implementation of fucntion _printf, which uses the prototype              int _printf(const char *format, ...).
_printf will return the number of characters printed (excluding the null byte used to end output to strings) and will write output to stdout, the standard output stream.
_putchar.c: - contains the function _putchar, which writes a character to stdout.
holberton.h: - contains all function prototypes used for _printf.
man_3_printf: - manual page for the custom _printf function.
printstring.c: - contains the functions print_char, print_str, print_R, and print_reversed which handle the conversion specifiers c, s, S, R and r, respectively
print_number.c: - contains the functions print_integer, print_hex, print_unsigned_int, print_octal  and print_binary, which handle the conversion specifiers i, d, x, X , u, o and b respectively
Authors
Abebayehu samuel | absa3852@gmail.com

Yosef Samuel | yosefsamue22@gmail.com
