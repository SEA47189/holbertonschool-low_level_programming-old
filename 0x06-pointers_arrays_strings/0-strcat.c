#include "holberton.h"
#include <string.h>
/**
 **_strcat - creates a new string by combining two
 *
 *@dest: string destination
 *
 *@src:  string source
 *
 *Return: 0 = Success
 */
char *_strcat(char *dest, char *src)
{
char d;
char s;
 
for (; d != '\0'; d++)
 
for (; s != '\0'; s++)
 
if (d == '\0')
{
return (dest);
}
if (s == '\0')
{
return (src);
}
else
{
return 0;
}
}
