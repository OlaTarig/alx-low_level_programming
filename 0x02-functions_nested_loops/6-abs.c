#include "main.h"
/**
 * _abs - prints the absolute value of a number
 *@n: an argument for the function
 * Return: return value.
 */
int _abs(int n)
{
int value;

	if (n >= 0)
	{
		value = n;
		return (value);
	}
	else
	{
		value = -n;
		return (value);
	}
}
