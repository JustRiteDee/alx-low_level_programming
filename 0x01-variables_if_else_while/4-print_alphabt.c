#include <stdio.h>
/**
 * main - A program that prints alphabets but, q and e
 *
 * Return: zero (success)
 */
int main(void)
{
	char z;

	for (z = 'a'; z <= 'z'; ++z)
	{
		if ((z == 'q') || (z == 'e'))
		{
			continue;
		}
		putchar(z);
	}
	putchar('\n');
	return (0);
}
