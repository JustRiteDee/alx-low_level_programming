#include "main.h"
/**
 * print_alphabet - utilizes the function to print alphabets.
 *
 * Return: Always zero (success)
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
