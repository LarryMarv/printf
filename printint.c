#include "main.h"
/**
 * print_int - Prints an integer.
 * @val: Argument to print.
 * Return: Number of characters printed.
 */
int print_int(va_list val)
{
	int n;

	n = va_arg(val, int);
	return (print_number(n, n < 0));
}

/**
 * print_dec - Prints decimal.
 * @val: Arguments.
 * Return: Decimal.
 */
int print_dec(va_list val)
{
	int n;

	n = va_arg(val, int);
	return (print_number(n, n < 0));
}
