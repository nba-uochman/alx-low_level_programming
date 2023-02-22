#include "main.h"
/**
 * print-alphabets - print the alphabet a-z
*/
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
