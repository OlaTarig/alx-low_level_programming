#include "main.h"
#include<stdlib.h>
/**
* _strdup - check the code for ALX School students.
*@str : string
* Return: Always 0.
*/
char *_strdup(char *str)
{
char *ptr;
unsigned int i = 0;
unsigned int j;

if (str == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
i++;
}
ptr = malloc((i + 1) * sizeof(char));
if (ptr == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
ptr[j] = str[j];
}
return (ptr);
}
