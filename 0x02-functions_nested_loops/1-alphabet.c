#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 *
 * Return: Void
 */
void print_alphabet(void)
{
	int i;
	/* Loop until reaching last letter */
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	{
		_putchar('\n');
	}

}
