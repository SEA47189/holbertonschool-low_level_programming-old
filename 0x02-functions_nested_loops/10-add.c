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
	{
		_putchar(c % 10 + '0');
		_putchar('\n');
	}
	return (0);
}
