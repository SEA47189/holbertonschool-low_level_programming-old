#include "main.h"
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
	if ((c > 'A') && (c < 'Z'))
	{
		putchar(c);
		putchar(':');
		putchar(' ');
		return (1);
	}
	else
	return (0);
}
