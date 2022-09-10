#include <stdio.h>
/**
 * main - A program that prints alphabets in lower case
 *
 * Return: zero (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; ++x)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);

}
