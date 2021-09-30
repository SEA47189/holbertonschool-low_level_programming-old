#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n;
	int count = 10;
	/* Loop until 10 times is reached */
	for (count = 0; count < 10; count++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		{
			_putchar('\n');
		}
	}
}
