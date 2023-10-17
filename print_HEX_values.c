#include "main.h"
#include <stdlib.h> /*Include the necessary header for malloc*/
/**
 * print_HEX_values - Prints a hexadecimal number.
 * @val: Argument.
 * Return: Number of characters printed.
 */
int print_HEX_values(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int digit;
	int i, results = 0;
	int buffer[32];/* Maximum number of hexadecimal digits in an unsigned int*/

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		digit = num % 16;
		buffer[results] = digit;
		num /= 16;
		results++;
	}
	for (i = results - 1; i >= 0; i--)
	{
		char hex_digit = (buffer[i] < 10) ?
			('0' + buffer[i]) : ('A' + buffer[i] - 10);
		_putchar(hex_digit);
	}
	return (results);
}
