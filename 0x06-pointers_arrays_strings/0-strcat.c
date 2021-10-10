#include "holberton.h"
#include <string.h>
/**
 **_strcat - creates a new string by combining two
 *
 *Function_name: - _putchar, strcpy
 *
 *@dest: string destination
 *
 *@src:  string source
 *
 *Return: 0 = Success
 */
char *_strcat(char *dest, char *src)
{
{
char d[30] = "Hello ";
char s[30] = "World!\n";

strcpy(d, "Hello");
strcpy(s, "World\n");

strcat(dest, src);
}
return (0);
}
