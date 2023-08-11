#include <stdio.h>
/**
 * *main - print all possible combinations of single-digits numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(,);
			putchar('');
		}
	}
	putchar('\');
	return (0);
}
