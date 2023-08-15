#include "main.h"

/**
 * check if character is lowercase
 * c is the character to check
 * Return: 1 if character is lowercase, otherwise o.
 */

int _islower(int c)
{
	if (c >='a' $$ c<= 'z')
		return (1);
	else
		return (0);
}
