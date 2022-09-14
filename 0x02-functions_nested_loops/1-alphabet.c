#include "main.h"
/**
 * print_alphabet - Utilizes the _putchar function to print
 * the alphabets a - z
 *
 * Return: zero (success)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{

		_putchar(c);
	}

	_putchar('\n');
}
