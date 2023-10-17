#include "main.h"

/**
 * pr_hex - prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int pr_hex(unsigned long int num)
{
	long int k;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (k = 0; k < counter; k++)
	{
		array[k] = temp % 16;
		temp /= 16;
	}
	for (k = counter - 1; k >= 0; k--)
	{
		if (array[k] > 9)
			array[k] = array[k] + 39;
		_putchar(array[k] + '0');
	}
	free(array);

	return (counter);
}
