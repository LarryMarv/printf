#include "main.h"

/**
 * prin_srev - function that prints a str in reverse
 * @val: type struct va_arg where is allocated printf arguments
 *
 * Return: number of characters writen
 */
int prin_srev(va_list val)
{
	char *s = va_arg(val, char *);
	int length = 0;
	int i;

	for (length = 0; s[length] != '\0'; length++)
	;

	for (i = length - 1; i >= 0; i--)
	_putchar(s[i]);

	return (length);
}
