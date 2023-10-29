#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
*main - function
*@argc: param
*@argv: param
*
*Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int cents;
int numofCoins;

if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
cents = atoi(argv[1]);
if (cents < 0)
printf("%d\n", 0);
else
{
numofCoins = cents / 25;
numofCoins += (cents % 25) / 10;
numofCoins += ((cents % 25) % 10) / 5;
numofCoins += (((cents % 25) % 10) % 5) / 2;
numofCoins += ((((cents % 25) % 10) % 5) % 2) / 1;
printf("%d\n", numofCoins);
}
}
return (0);
}
