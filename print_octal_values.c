#include "main.h"
/**
 * print_oct - Prints an unsigned integer as an octal number.
 * @val: va_list argument
 * Return: Number of characters printed
 */
int print_oct(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int printed = 0;
	int octal[12];
	int j;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		octal[printed] = num % 8;
		num /= 8;
		printed++;
	}
	for (j = printed - 1; j >= 0; j--)
		_putchar(octal[j] + '0');
	return (printed);
}
