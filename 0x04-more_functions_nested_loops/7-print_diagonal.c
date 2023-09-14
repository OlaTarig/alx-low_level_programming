#include "main.h"
/**
 * print_diagonal - check the code
 *@n: param
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}

