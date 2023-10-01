#include<main.h>
/**
* _strlen_recursion - check the code
*@s:char
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
int count = 0;

if (*s)
{
count++;
count += _strlen_recursion(s + 1);
}
return (count);
}
