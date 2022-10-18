#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints if a number is negaitve , zero or negative
 * Return: Always 0
 */
int main(void)
{
	int n;

	strand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n));
	}

	return (0);
}
