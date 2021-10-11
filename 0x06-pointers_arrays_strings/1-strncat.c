#include "holberton.h"
#include <string.h>
/**
 **_strncat - creates a new string by combining two
 *
 *Function_name: - strcpy, putchar
 *
 *@dest: string destination
 *
 *@src:  string source
 *
 *@n: number of characters to append
 *
 *Return: 0 = Success
 */
char *_strncat(char *dest, char *src, int n)
{
char d[6] = "Hello ";
char s[7] = "World!\n";
n = 1;
{
strcpy(d, "Hello");
strcpy(s, "World\n");

strncat(dest, src, n);
{
for (n = 0; n != '\0'; n++)
dest = src + n;
}
{
return (dest);
}
}
}
