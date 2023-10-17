#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
typedef struct format
{
char *id;
int (*f)(va_list);
} make_match;

int _putchar(char c);
int prin_rot13(va_list val);
int prin_srev(va_list val);
int pr_hex(unsigned long int num);
int prin_HEX(unsigned int num);
int printing_binary(va_list val);
int print_number(int n, int neg);
int print_dec(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);/*printf prototype*/
int print_char(va_list val);/*Prints a character*/
int print_str(va_list val);/*prints a string*/
int _strlength(char *s);/*Returns the length*/
int _strlengthc(const char *str);/*No const var is condidered here*/
int print_37(va_list val);/*Prints out the % sign*/
int printing_binary(va_list val);
int print_unsigned_values(va_list val);
int print_oct(va_list val);
int print_hex_values(va_list val);
int print_HEX_values(va_list val);
int prin_HEX_S(unsigned int num);
int custom_print_S(va_list val);
int print_pointer_value(va_list val);
#endif
