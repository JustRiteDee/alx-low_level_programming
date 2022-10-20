#include<stdio.h>

/**
 * File name - 100-first.c
 * Author - Emmanuel Ephraim
 */
 
 
/**
 * _100first - Prints a message before main function
 * Return - returns 0
 */
 
void __attribute__ ((constructor)) _100first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
	return(0);
}
