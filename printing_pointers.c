#include "main.h"
/**
 * print_pointer_value - print hundles pointer values.
 * @val: val.
 * Return: count.
 */
int print_pointer_value(va_list val)
{
	void *c;
	char *str = "(nil)";
	long int a;
	int b;
	int k;

	c = va_arg(val, void*);
	if (c == NULL)
	{
		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
		return (k);
	}
	a = (unsigned long int)c;
	_putchar('0');
	_putchar('x');
	b = pr_hex(a);
	return (b + 2);
}
