#include "main.h"
#include <stdio.h>
/**
*main - entry or starting point for function
*printf: prints filename
*
*Function: print program file name
*
*@argc: counter points to array
*@argv: array of counter
*
*Return: 0 = Success
*/
int main(int argc, char *argv[])
{
int a;

for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
{
return (0);
}
}
