#include <stdio.h>
/**
*main - entry point
*
*printf: prints filename
*
*@argc: counter points to array
*@argv: array of counter
*
*Return: 0 - success
*/
int main(int argc, char **argv)
{
int a;
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[0]);
}
return (0);
}
