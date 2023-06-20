/*
 * File: 3-islower.c
 * Auth: Tarek Wael
 */

#include "main.h"

/**
 * islower - Cheks for lower case char
 */
int _islower(int c)
{
	if (c < 123 && c > 96)
	{
	return (1);
	}
return (0);
}
