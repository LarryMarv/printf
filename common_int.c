#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 * @neg: Flag indicating if the number is negative.
 * Return: Number of characters printed.
 */
int print_number(int n, int neg)
{
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (neg)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}

	_putchar(last + '0');
	return (i);
}
