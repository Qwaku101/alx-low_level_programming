#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 *
 * Return: a pointer beg of substring or @Null if it not foound.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int k = 0, j = 0;

	while (haystack[k])
	{
		while (needle[j] && (haystack[k] == needle[0]))
		{
			if (haystack[k + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			k++;
			j = 0;
		}
		else
			return (haystack + k);
	}
	return (0);
}
