#include "main.h"

/**
 * printing_binary - Print binary representation with leading zeros
 * @val: va_list argument
 * Return: Number of characters printed
 */
int printing_binary(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int printed = 0;
	int i;
	int bit;
	int leading_zeros = 1;

	for (i = 31; i >= 0; i--)
	{
		bit = (num >> i) & 1;
		if (bit == 1)
		{
			leading_zeros = 0;
		}
		if (!leading_zeros)
		{
			_putchar(bit + '0');
			printed++;
		}
	}
	if (printed == 0)
	{
		_putchar('0');
		printed++;
	}
	return (printed);
}
