#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: length of the string
 */
void _puts(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
