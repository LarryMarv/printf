#include "main.h"
/**
 * prin_HEX_S - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int prin_HEX_S(unsigned int num)
{
	int i;
	int *list;
	int count = 0; /* Keeps the counter */
	unsigned int temporary = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	list = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		list[i] = temporary % 16;
		temporary /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (list[i] > 9)
			list[i] = list[i] + 7;
		_putchar(list[i] + '0');
	}
	free(list);
	return (count);
}
