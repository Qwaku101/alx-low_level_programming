#include "main.h"

/**
 * _strlen - returns string length
 *@s: character to be used
 *
 * Return: integer value
 */

int _strlen(char *s)

{
	int k = 0;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	return (k);
}
