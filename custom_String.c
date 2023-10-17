#include "main.h"
/**
 * custom_print_S - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int custom_print_S(va_list val)
{
	char *str;
	int a, length = 0;
	int display;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(null)";
	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] < 32 || str[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			display = str[a];
			if (display < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + prin_HEX_S(display);
		}
		else
		{
			_putchar(str[a]);
			length++;
		}
	}
	return (length);
}
