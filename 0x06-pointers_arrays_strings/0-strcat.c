#include "main.h"
/**
 * _strcat - check the code
 *@dest: char
 *@src: char
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
*dest = '\0';
}
