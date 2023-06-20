/*
 * File: 2-print_alphabet_x10.c
 * Auth: Tarek Wael
 */

#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase,
 *  followed by a new line 10 times.
 */
void print_alphabet_x10(void)
{
	char l;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (l = 'a'; l <= 'z'; l++)
	_putchar(l);
	_putchar('\n');
	}
}
