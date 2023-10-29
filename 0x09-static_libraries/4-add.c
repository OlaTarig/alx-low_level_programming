#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 *main - function
 *@argc: param
 *@argv: param
 *
 *Return: sum
 */
int main(int argc, char *argv[])
{
int i;
int j;
int k;
int numOfDigits;
int numOfChars = 0;
int sum = 0;
int num;
char *n;
if (argc == 1)
printf("%d\n", 0);
else
{
for (i = 1; i < argc; i++)
{
j = 0;
n = argv[i];
numOfChars = _isChar(n, j);
}
numOfDigits = argc - 1 - numOfChars;
if (numOfDigits == 0)
printf("%d\n", 0);
else if (numOfDigits < (argc - 1))
{
printf("Error\n");
return (1);
}
else
for (k = 0; k < argc; k++)
{
num = atoi(argv[k]);
sum += num;
}
printf("%d\n", sum);
}
return (0);
}
/**
*_isChar - check if it is a char
*@input: param
*
*Return: number
*/
int _isChar(char *input, int l){
int numOf = 0;

while (input[l] != '\0')
{
if (!(input[l] >= 48 && input[l] <= 57))
{
l++;
numOf++;
break;
}
l++;
}
return numOf;
}
