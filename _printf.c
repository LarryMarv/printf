#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	make_match m[] = {
		{"%s", print_str}, {"%c", print_char}, {"%%", print_37},
		{"%d", print_dec}, {"%i", print_int}, {"%b", printing_binary},
		{"%u", print_unsigned_values}, {"%o", print_oct}, {"%x", print_hex_values},
		{"%X", print_HEX_values}, {"%S", custom_print_S},
		{"%p", print_pointer_value}, {"%r", prin_srev}, {"%R", prin_rot13}
	};
	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i += 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
