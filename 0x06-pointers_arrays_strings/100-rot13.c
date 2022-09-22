#include "main.h"
/**
 * rot13 - a function that encodes a string using rot13
 * @x: input string.
 * Return: the pointer to dest.
 */
char *rot13(char *x)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";


	while (*(x + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(x + count) == alphabet[i])
			{
				*(x + count) = rot13[i];
				break;
			}
		}
		count++
	}
}	return (x);
