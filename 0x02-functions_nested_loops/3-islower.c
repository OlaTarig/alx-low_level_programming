#include "main.h"
/**
 * _islower - check whether a char is a lowercase or not
 * @c: an argument for the function
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
