#include "main.h"
/**
 * print_alphabet - Utilizes the _putchar function to print
 * the alphabets a - z
 * Return: zero (success)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
