#include "main.h"

/**
* print_rev - printing a string in reverse
* @s: the string to be printed in rev
*
* Return: void
*/

void print_rev(char *s)
{
	int i, k;

	n = 0;
	while (s[k] != '\0')
		k++;

	for (i = k - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
