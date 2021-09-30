#include "main.h"
/**
 *add - add two numbers
 *
 *@a: numbers
 *
 *@b: number
 *
 *Return: 0 = Success
 */
int add(int a, int b)
{
	int c;

	c = a + b;
	if (c > 0)
	{
		c = (c % 10);
		_putchar(c + '0');
	}
	if (c < 0)
	{
		c = (c * -1);
		c = (c % 10);
		_putchar(c + '0');
	}
	if (c == 0)
	{
		c = (c % 10);
		_putchar(c + '0');
	}
	_putchar('\n');
	return (0);
}
