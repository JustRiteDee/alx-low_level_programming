#include "main.h"
#include <string.h>

/**
 * _strcat - This is a function strcat
 * @dest: first parameter
 * src: second parameter
 *
 * Return: Always returns a string
 *
 */
char *_strcat(char *dest, char *src)
{
	strcat (dest, src);
	return (dest);
}
