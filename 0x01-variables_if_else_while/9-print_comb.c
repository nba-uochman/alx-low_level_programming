#include <stdio.h>
/**
 * main - code block
 * Description: program that prints all possible combination of a single digit number
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
	{
		putchar(number);

		if (number == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}

	putchar('\n');
	return (0);
}
