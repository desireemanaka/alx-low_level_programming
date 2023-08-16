#include "main.h"

/**
 * prints the alphabet in lower case
 * Return: Alwaya 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
