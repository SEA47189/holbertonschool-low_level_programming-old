#include "main.h"
/**
 * main - entry point
 *
 * function_name - _putchar
 *
 * prints_alphabet- prints the alphabet letters
 *
 * Return: Void
 */
void print_alphabet(void)
{
	int i;
	/* Loop until reaching last letter */
	for (i = 97; i <= 122; i++)
		_putchar(i);
		_putchar('\n');

}
