#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of two diagonals of a 
 * square matrix of integers sum
 * @a: input string
 * @size: input character
 *
 * Return: always 0
 */

void print_diagsums(int *a, int size)
{
	int i, j, s1, s2;

	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				s1 += *((a + i * size) + j);
			}
			if ((i + j) == (size - 1))
			{
				s2 += *((a + i * size) + j);
			}
		}
	}
	printf("%i, %i\n", s1, s2);
}
