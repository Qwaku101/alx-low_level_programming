#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - assign random numbers
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;
	printf("Last digit of %d is %d ", n, x);
	if (y > 5)
	{
		printf("and is greater than 5");
	}
	if (y == 0)
	{
		printf("and is 0");
	}
	if (y < 6 && y != 0)
	{
		printf("and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}