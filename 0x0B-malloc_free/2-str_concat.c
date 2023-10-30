#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *str_concat - function
 *@s1: param
 *@s2: param
 *
 *Return: null or str
 */
char *str_concat(char *s1, char *s2)
{
int len1 = 0, len2 = 0, j = 0, i = 0;
int k;
char *ptr;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[i] != '\0')
{
len1++;
i++;
}
while (s2[j] != '\0')
{
len2++;
j++;
}
ptr = malloc(sizeof(char) * (len1 + len2 + 1));
if (ptr == NULL)
return (NULL);
for (k = 0, i = 0; k < len1, i < len1; k++, i++)
{
ptr[i] = s1[k];
}
for (int l = len1, j = 0; l < len1 + len2, j < len2; l++, j++)
ptr[l] = s2[j];
ptr += '\0';
return (ptr);
}
