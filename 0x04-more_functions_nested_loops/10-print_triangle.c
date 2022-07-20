#include "main.h"

/**
 * print_triangle -> printing triangle
 */
void print_triangle(void)
{
	int i, j, k;
	
	for (i = 1; i <= 2; i++)
	{
		for (k = 2; k <= i; k--)
			_putchar(" ");
	}
	{
		for (j = 1; j <= i; j++)
		{
		_putchar("#");
		}
	}
}
