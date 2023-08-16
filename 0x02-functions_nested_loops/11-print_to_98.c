#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: print from this number
 */
void print_to_98(int n)
{
	int j;
	
	if (n <= 98)
	{
		for (j =n; j <= 98; j++)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
	else
	{
		for (j = n; j >= 98; j--)
		{
			if (j != 98)
				printf("%d, ", j);
			else
				printf("%d\n", j);
		}
	}
}
