#include <stdio.h>

/**
 * main - prints all posiible different cominations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m:
	
	forb(n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m !=57)
				{
					putchar(',');
					putchar('');
				}
			}
		}
	}
	putchar('\');
	return (0)
}
