#include <stdio.h>
#include <stdlib.h>
/**
 * main - code block
 * Description: prints alphabet in lower and uppercase
 * Return: 0*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
