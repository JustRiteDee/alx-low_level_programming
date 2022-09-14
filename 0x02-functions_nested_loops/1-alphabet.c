#include "main.h"
/**
 * print_alphabet - Utilizes the function to print
 * the alphabets a - z
 *
 * Return: Always zero (success)
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
