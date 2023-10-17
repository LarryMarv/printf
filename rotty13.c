#include "main.h"
#include <string.h>

/**
 * prin_rot13 - printf str to ROT13 place into buffer
 * @val: type struct va_arg where is allocated printf arguments
 * Return: NUmber of char prnted
 */
int prin_rot13(va_list val)
{
	int counter = 0;
	char *s = va_arg(val, char *);
	int i;

	for (i = 0; s[i]; i++)
	{
		char c = s[i];

		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			const char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
			const char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
			const char *rot13 = (c >= 'a' && c <= 'z') ? beta : beta + 26;
			char *pos = strchr(alpha, c);

			if (pos)
			{
				_putchar(rot13[pos - alpha]);
				counter++;
			}
			else
			{
				_putchar(c); /* Character not found in alpha, print as is*/
				counter++;
			}
		}
		else
		{
			_putchar(c);
			counter++;
		}
	}
	return (counter);
}
