#include<main.h>
/**
* _puts_recursion - check the code
*@s: char
* Return: Always 0.
*/
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
