#include "main.h"

/**
 * print_alphabet - prints the alpha in lowercase
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_puthchar(la);
	_putchar('\n');
}
