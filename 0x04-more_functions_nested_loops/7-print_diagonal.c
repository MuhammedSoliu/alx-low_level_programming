#include "main.h"

/**
 * print_diagonal - prints diagonal in the terminal
 * @n: the number of time diagonal is to be printed
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n >= 1)
		{
			_putchar('\\');
		}
	}
	_puchar('\n');
}
