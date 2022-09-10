#include <stdio.h>
/**
 * main - A program that prints numbers in hexadecimal (base 16)
 *
 * Return: zero (success)
 */
int main(void)
{
	int i;
	char x;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
