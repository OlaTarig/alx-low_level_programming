#include "main.h"
/**
 * print_alphabet: print the alphabets in lowercase followed by a new line
 * main: Entry point
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}