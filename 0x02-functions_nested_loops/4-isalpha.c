#include "main.h"
/**
 * _isalpha - main function
 * @c: Takes input from other true else 0
 *
 * Return: 1 is c if true else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	return (0);
}
