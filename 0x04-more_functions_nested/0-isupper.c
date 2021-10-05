#include "holberton.h"
#include <stdio.h>
/**
 * _isupper - finds the upper case letter
 *
 * Function_name - putchar
 *
 * putchar - prints letters
 *
 *@c: character to print
 *
 * Return: 0 = Success
 */
int _isupper(int c)

{
	/* Loop to print upper case alphabet */
	if ((c > 65) && (c < 90))
	{
		putchar(c);
		putchar(':');
		putchar(' ');
		return (1);
	}
	if ((c > 97) && (c < 122))
	{
		putchar(c);
		putchar(':');
		putchar(' ');
	}
	return (0);
}
