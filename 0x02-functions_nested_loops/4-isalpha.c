#include "main.h"
/**
 * _isalpha - check if a char is an upper or lowercase letter
 *@c: an argument of the function
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
