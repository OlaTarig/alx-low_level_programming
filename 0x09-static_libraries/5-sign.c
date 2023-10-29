#include "main.h"
/**
 * print_sign - check wether a number is positive or negative.
 *@n: an argument for the function
 * Return: return 0 or 1 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}
