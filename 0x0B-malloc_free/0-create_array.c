#include "main.h"
#include<stdlib.h>
/**
*create_array - creates an array of chars
*@size: param
*@c: char param
*
*Return: 0 or 1
*/
char *create_array(unsigned int size, char c)
{
char *ptr;
int i;
ptr = malloc(sizeof(char) * size);
if (size == 0 || ptr == NULL)
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (ptr);
}
