#include "main.h"
#include<stdlib.h>
/**
 *_strdup - function char
 *@str: param
 *
 *Return: char or NULL
 */
char *_strdup(char *str)
{
char *ptr;
int len = 0;
int j = 0;

while (str[j] != '\0')
{
len++;
j++;
}
ptr = malloc(sizeof(char) * (len + 1));
if (ptr == NULL)
return (NULL);
for (int i = 0; i < len; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
