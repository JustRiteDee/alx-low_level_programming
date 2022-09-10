#include <stdio.h>
/**
 * main - A program that prints lower case alpabet in reverse
 *
 * Return: zero (success)
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);

}
