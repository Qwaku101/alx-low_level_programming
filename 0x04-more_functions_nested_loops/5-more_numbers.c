#include "main.h"

/**
 * more_numbers - print more_numbers
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int c, j;

	for (c = 1; c <= 10; c++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar('1');
			_putchar(j % 10 + '0');
		}
			_putchar('\n');
		}

}
