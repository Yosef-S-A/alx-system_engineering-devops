#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that duplicates the functionalities of printf
 * @formatstring: string with format specification
 *
 * Return: number of chars printed
 */
int _printf(const char *formatstring, ...)
{
va_list args;
int length = 0;
char *printstr;
char *rot13ed;
char *printrevstr;
char *s;
//char *printaddress;
char printchar;
int printInteger;
unsigned int printHexa;
unsigned int printUnisgnedInt;
unsigned int binaryNumber;
unsigned int octalNumber;

if (formatstring == NULL)
return (-1);

va_start(args, formatstring);
while(*formatstring)
{
if(*formatstring == '%')
{
formatstring++;
switch(*formatstring)
{
case 's': 
printstr = va_arg(args, char*);
length += print_str(printstr);
formatstring++;
break;
case 'r': 
printrevstr = va_arg(args, char *);
length += print_reversed(printrevstr);
formatstring++;
break;
case 'c': 
printchar = va_arg(args, int);
length += print_char(printchar);
formatstring++;
break;
case 'i':
case 'd':  
printInteger = va_arg(args, int);
length += print_integer(printInteger);
formatstring++;
break;
case 'u':  
printUnisgnedInt = va_arg(args, unsigned int);
length += print_unsigned_int(printUnisgnedInt);
formatstring++;
break;
case 'b':  
binaryNumber = va_arg(args, unsigned int);
length += print_binary(binaryNumber);
formatstring++;
break;
case 'o':  
octalNumber = va_arg(args, unsigned int);
length += print_octal(octalNumber);
formatstring++;
break;
case 'x':  
printHexa = va_arg(args, unsigned int);
length += print_hex(printHexa, 0);
formatstring++;
break;
case 'X':  
printInteger = va_arg(args, unsigned int);
length += print_hex(printHexa, 1);
formatstring++;
break;
// case 'p':  
//                 printaddress = (char*)va_arg(args, void*);
//                 length += print_p(printaddress);
//       formatstring++;
//                 break;
case 'R': 
rot13ed = va_arg(args, char*);
length += print_R(rot13ed);
formatstring++;
break;
case '%': 
_putchar('%');
formatstring++;
length++;
break;
case ' ':
formatstring++;
length++;
break;
case '\0': 
break;
default:
_putchar(*formatstring);
formatstring++;            
length +=2;
}       
}
else
{
_putchar(*formatstring);
formatstring++;
length++;
}
}

va_end(args);

return (length);
}
