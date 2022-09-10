#include <stdio.h>
/**
 * main - a program that prints all single digit numbers from 0 to 9
 *
 * Return: zero (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	putchar('\n');
	return (0);
}
