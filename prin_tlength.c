#include "main.h"
/**
 * _strlength - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: c.
 */
int _strlength(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}
/**
 * _strlengthc - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: c
 */
int _strlengthc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
