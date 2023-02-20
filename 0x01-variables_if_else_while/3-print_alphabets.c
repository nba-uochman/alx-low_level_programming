#include <stdio.h>
/**
 * main - code block
 * Description: prints alphabets in lower case and then in uppercase follow by a new line
 * Return: 0*/
int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';
	while(lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while(upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
	return(0);
}
