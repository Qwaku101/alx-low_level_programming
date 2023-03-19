#include <stdio.h>
/**
 * main - print out sizes of data types in C
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %ul byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %ul byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int : %ul byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %ul byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %ul byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}