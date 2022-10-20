#include<stdio.h>

/**
 * File name - 100-first.c
 * Author - Emmanuel Ephraim
 */
 
 
/**
 * bmain - function executed before main
 * Return: no return.
 */
void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
