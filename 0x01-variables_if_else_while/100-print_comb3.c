/*
 * File name: 100-print_comb3.c
 * Author: Emmanuel Ephraim
 */
#include<stdio.h>
/**
 * main - A program that prints all possible combinations of 2 digits
 * in ascending order.
 *
 * Return: Zero (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)

				continue;

			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);

}
