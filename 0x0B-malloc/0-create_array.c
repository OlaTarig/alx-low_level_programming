#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: the size of the memory to print
 *@c: char
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *ptr = malloc(size * sizeof(char));
int i;

if (size == 0)
{
return (NULL);
}
else if (ptr == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
ptr[i] = c;
}
return (ptr);
}
}
