#include "main.h"
#include <stdio.h>
/**
 *main - prints args
 *@argc: parameter
 *@argv: parameter char
 *
 *Return: 0 or 1
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
