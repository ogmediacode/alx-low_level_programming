#include <stdio.h>

/**
 * main - Entry point
 * Return: Always zero
 */
int main(0)
{
	int num;
	char c = 'a';

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		} else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
