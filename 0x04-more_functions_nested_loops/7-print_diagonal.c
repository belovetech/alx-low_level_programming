#include "main.h"

/**
* print_diagonal - prints diagonal line
* @n: number of times
*
* Return: void
*/

void print_diagonal(int n)
{
	if ((n != 0) && (n > 0))
	{
		int row, col;

		for (row = 1; row <= n; row++)
		{
			for (col = 1; col <= n; col++)
			{
				if (row == col)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
