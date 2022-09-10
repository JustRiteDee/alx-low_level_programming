#include <stdio.h>
/**
 * main - A program that prints alphabets in lower and upper case
 *
 * Return: zero (success)
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; ++y)
	{
		putchar(y);
	}
	for (y = 'A'; y <= 'Z'; ++y)
	{
		putchar(y);
	}

	putchar('\n');

	return (0);

}

