#include <stdio.h>
/**
 * main - code block
 * Description: print numbers of base sixteen in lowercase
 * Retrun: 0
 */
int main(void)
{

	int base_16;

	for (base_16 = 48; base_16 <= 57; base_16++)
	{
		putchar(base_16);
	}

	for (base_16 = 97; base_16 <= 102; base_16++)
	{
		putchar(base_16);
	}

	putchar('\n');
	return (0);
}
