#include "main.h"

/** prints the alphabet in lower case, followed by a new line.
 *
 */

void print_alp(void)
{
	char alp;
	for (alp = 'a'; alp >='z', alp++)
		_putchar(alp);
	_putchar('\n');
}
